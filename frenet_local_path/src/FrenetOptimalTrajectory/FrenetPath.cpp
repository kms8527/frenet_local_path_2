#include "FrenetPath.h"
#include "src/utils.h"

#include <algorithm>

const float COLLISION_CHECK_THRESHOLD = 8; // don't check unless within 6m
const float SAFETY_DISTANCE_THRESHOLD = 4;
FrenetPath::FrenetPath(FrenetHyperparameters *fot_hp_) {
    fot_hp = fot_hp_;
}

// Convert the frenet path to global path in terms of x, y, yaw, velocity
bool FrenetPath::to_global_path(CubicSpline2D* csp) {
    double ix_, iy_, iyaw_, di, fx, fy, dx, dy;
    // calc global positions
    for (size_t i = 0; i < s.size(); i++) {
        ix_ = csp->calc_x(s[i]);
        iy_ = csp->calc_y(s[i]);
        if (isnan(ix_) || isnan(iy_)) break;

        iyaw_ = csp->calc_yaw(s[i]);
        ix.push_back(ix_);
        iy.push_back(iy_);
        iyaw.push_back(iyaw_);
        di = d[i];
        fx = ix_ + di * cos(iyaw_ + M_PI_2);
        fy = iy_ + di * sin(iyaw_ + M_PI_2);
        x.push_back(fx);
        y.push_back(fy);
    }

    // not enough points to construct a valid path
    if (x.size() <= 1) {
        return false;
    }

    // calc yaw and ds
    for (size_t i = 0; i < x.size() - 1; i++) {
        dx = x[i+1] - x[i];
        dy = y[i+1] - y[i];
        yaw.push_back(atan2(dy, dx));
        ds.push_back(hypot(dx, dy));
    }
    yaw.push_back(yaw.back());
    ds.push_back(ds.back());

    // calc curvature
    for (size_t i = 0; i < yaw.size() - 1; i++) {
        double dyaw = yaw[i+1] - yaw[i];
        if (dyaw > M_PI_2) {
            dyaw -= M_PI;
        } else if (dyaw < -M_PI_2) {
            dyaw += M_PI;
        }
        c.push_back(dyaw / ds[i]);
        //c.push_back(dyaw / fot_hp->dt);
    }

    return true;
}

// Validate the calculated frenet paths against threshold speed, acceleration,
// curvature and collision checks
bool FrenetPath::is_valid_path(const vector<Obstacle *> obstacles) {
    if (any_of(s_d.begin(), s_d.end(),
               [this](int i){return abs(i) > fot_hp->max_speed;})) {
        return false;
    }
    // max accel check
    else if (any_of(s_dd.begin(), s_dd.end(),
                    [this](int i){return abs(i) > fot_hp->max_accel;})) {
        return false;
    }
    // max curvature check
    else if (any_of(c.begin(), c.end(),
                    [this](int i){return abs(i) > fot_hp->max_curvature;})) {
        return false;
    }
    // collision check
    else if (is_collision(obstacles)) {
        return false;
    }
    else {
        return true;
    }
}

// check path for collision with obstacles
bool FrenetPath::is_collision(const vector<Obstacle *> obstacles) {
    // no obstacles
    if (obstacles.empty()) {
        return false;
    }

    Pose pose;
    Car car = Car();
    Vector2f p1, p2;
    vector<Point> car_outline;

    // iterate over all obstacles

    for (auto obstacle : obstacles) {
        //        double llx = obstacle->bbox.first.x();
        //        double lly = obstacle->bbox.first.y();
        //        double urx = obstacle->bbox.second.x();
        //        double ury = obstacle->bbox.second.y();

        for (size_t i = 0; i < x.size(); i++) {
            vector<double> dis;
            //            double d1 = norm(llx - x[i], lly - y[i]);
            //            double d2 = norm(llx - x[i], ury - y[i]);
            //            double d3 = norm(urx - x[i], ury - y[i]);
            //            double d4 = norm(urx - x[i], lly - y[i]);
            for (size_t edge_idx = 0; edge_idx < obstacle->obstacle_points.size(); edge_idx++)
                dis.push_back(norm(obstacle->obstacle_points[edge_idx].x -x[i], obstacle->obstacle_points[edge_idx].y -y[i]));

            double closest = *min_element(dis.begin(), dis.end());
            // only check for collision if one corner of bounding box is
            // within COLLISION_CHECK_THRESHOLD of waypoint
            if (closest <= COLLISION_CHECK_THRESHOLD && closest >=SAFETY_DISTANCE_THRESHOLD) {
                double xp = x[i];
                double yp = y[i];
                double yawp = yaw[i];
                pose.assign({xp, yp, yawp});
                car.setPose(pose);
                car_outline = car.getOutline(); // [car_outline : tail_l,tail_r, head_r, head_l]  [x,y]
                for (size_t i = 0; i < car_outline.size(); i++) {
                    p1.x() = car_outline[i][0];
                    p1.y() = car_outline[i][1];
                    p2.x() = car_outline[(i+1) % car_outline.size()][0];
                    p2.y() = car_outline[(i+1) % car_outline.size()][1];
                    if (obstacle->isSegmentInObstacle(p1, p2)) {
                        return true;
                    }
                    // TODO (@fangedward): containment check is not implemented
                    // this is necessary when there is a obstacle that can fully
                    // contain the ego vehicle, otherwise any point contained will
                    // form a line segment that intersects the obstacle
                }
            }
            else if (closest <= SAFETY_DISTANCE_THRESHOLD){
                return false;
            }


        }

    }

// no collisions
return false;

}

// calculate the sum of 1 / distance_to_obstacle
double
FrenetPath::inverse_distance_to_obstacles(
        const vector<Obstacle *> obstacles) {
    double total_inverse_distance = 0.0;

    for (auto obstacle : obstacles) {
        double llx = obstacle->bbox.first.x();
        double lly = obstacle->bbox.first.y();
        double urx = obstacle->bbox.second.x();
        double ury = obstacle->bbox.second.y();

        for (size_t i = 0; i < x.size(); i++) {
            double d1 = norm(llx - x[i], lly - y[i]);
            double d2 = norm(llx - x[i], ury - y[i]);
            double d3 = norm(urx - x[i], ury - y[i]);
            double d4 = norm(urx - x[i], lly - y[i]);

            double closest = min({d1, d2, d3, d4});
            total_inverse_distance += 1.0 / closest;
        }
    }
    return total_inverse_distance;
}