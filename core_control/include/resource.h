//  resource.h
//
//  ~~~~~~~~~~~~
//
//  PCAN Basic text resources
//
//  ~~~~~~~~~~~~
//
//  ------------------------------------------------------------------
//  Author : Thomas Haber (thomas@toem.de)
//  Last change: 18.06.2010
//
//  Language: C++
//  ------------------------------------------------------------------
//  Copyright (C) 1999-2010  PEAK-System Technik GmbH, Darmstadt
//  more Info at http://www.peak-system.com
//  ------------------------------------------------------------------
//
// PCAN is a registered Trademark of PEAK-System Germany GmbH
//
// linux@peak-system.com
// www.peak-system.com
//
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
// 
//

#define    IDS_STR_IND_LANG_DE         0
#define    IDS_STR_IND_LANG_EN         1
#define    IDS_STR_IND_LANG_ES         2
#define    IDS_STR_IND_LANG_FR         3
#define    IDS_STR_IND_LANG_IT         4
#define    IDS_STR_IND_LANG_NUM        5

#define    IDS_STR_IND_ERR_OK          0
#define    IDS_STR_IND_ERR_XMTFULL     1
#define    IDS_STR_IND_ERR_OVERRUN     2
#define    IDS_STR_IND_ERR_BUSLIGHT    3
#define    IDS_STR_IND_ERR_BUSHEAVY    4
#define    IDS_STR_IND_ERR_BUSOFF      5
#define    IDS_STR_IND_ERR_ANYBUSERR   6
#define    IDS_STR_IND_ERR_QRCVEMPTY   7
#define    IDS_STR_IND_ERR_QOVERRUN    8
#define    IDS_STR_IND_ERR_QXMTFULL    9
#define    IDS_STR_IND_ERR_REGTEST     10
#define    IDS_STR_IND_ERR_NODRIVER    11
#define    IDS_STR_IND_ERR_RESOURCE    12
#define    IDS_STR_IND_ERR_ILLPARAMTYPE 13
#define    IDS_STR_IND_ERR_ILLPARAMVAL 14
#define    IDS_STR_IND_ERR_ILLHANDLE   15
#define    IDS_STR_IND_ERR_INITIALIZE  16
#define    IDS_STR_IND_ERR_UNKNOW      17
#define    IDS_STR_IND_ERR_HWINUSE     18
#define    IDS_STR_IND_ERR_NETINUSE    19
#define    IDS_STR_IND_ERR_ILLHW       20
#define    IDS_STR_IND_ERR_ILLNET      21
#define    IDS_STR_IND_ERR_ILLCLIENT   22
#define    IDS_STR_IND_ERR_LANG_NUM    23

#define    IDS_STR_DE_ERR_OK          "Kein Fehler"
#define    IDS_STR_DE_ERR_XMTFULL     "Das Sendepuffer im Controller ist voll"
#define    IDS_STR_DE_ERR_OVERRUN     "Der CAN-Controller wurde zu sp??t gelesen"
#define    IDS_STR_DE_ERR_BUSLIGHT    "Busfehler: ein Errorcounter erreichte Limit"
#define    IDS_STR_DE_ERR_BUSHEAVY    "Busfehler: ein Errorcounter erreichte Limit"
#define    IDS_STR_DE_ERR_BUSOFF      "Busfehler: PCAN_Controller ging 'Bus-Off'"
#define    IDS_STR_DE_ERR_ANYBUSERR   "Ein Busfehler ist aufgetreten"
#define    IDS_STR_DE_ERR_QRCVEMPTY   "Das Empfangsqueue ist leergelesen"
#define    IDS_STR_DE_ERR_QOVERRUN    "Das Empfangsqueue wurde zu sp??t gelesen"
#define    IDS_STR_DE_ERR_QXMTFULL    "Das Sendequeue ist voll"
#define    IDS_STR_DE_ERR_REGTEST     "Der RegisterTest des 82C200 schlug fehl"
#define    IDS_STR_DE_ERR_NODRIVER    "Der Treiber ist nicht geladen"
#define    IDS_STR_DE_ERR_RESOURCE    "Resource (FIFO, Client, Timeout) nicht erzeugbar"
#define    IDS_STR_DE_ERR_ILLPARAMTYPE "Parameter ist hier nicht erlaubt/anwendbar"
#define    IDS_STR_DE_ERR_ILLPARAMVAL "Das Parameterwert ist ung??ltig"
#define    IDS_STR_DE_ERR_ILLHANDLE   "Das Wert eines Handles (PCAN-Channel, PCAN-Hardware, PCAN-Net, PCAN-Client) ist ung??ltig"
#define    IDS_STR_DE_ERR_INITIALIZE  "Das PCAN Kanal ist nicht initialisiert oder die Initialisierungsvorgang ist fehlgeschlagen"
#define    IDS_STR_DE_ERR_UNKNOW      "Ein unbekannter Fehler ist aufgetreten"
#define    IDS_STR_DE_ERR_HWINUSE     "Die PCAN-Hardware ist bereits von einem PCAN-Net belegt"
#define    IDS_STR_DE_ERR_NETINUSE    "Am PCAN-Net ist bereits mindestens ein PCAN-Client angeschlossen"
#define    IDS_STR_DE_ERR_ILLHW       "Das Handle einer PCAN-Hardware ist ung??ltig"
#define    IDS_STR_DE_ERR_ILLNET      "Das Handle eines PCAN-Net ist ung??ltig"
#define    IDS_STR_DE_ERR_ILLCLIENT   "Das Handle eines PCAN-Client ist ung??ltig"

#define    IDS_STR_EN_ERR_OK          "No Error"
#define    IDS_STR_EN_ERR_XMTFULL     "The transmit buffer in CAN controller is full"
#define    IDS_STR_EN_ERR_OVERRUN     "The CAN controller was read too late"
#define    IDS_STR_EN_ERR_BUSLIGHT    "Bus error: an error counter reached the 'light' limit"
#define    IDS_STR_EN_ERR_BUSHEAVY    "Bus error: an error counter reached the 'heavy' limit"
#define    IDS_STR_EN_ERR_BUSOFF      "Bus error: the CAN controller is in bus-off state"
#define    IDS_STR_EN_ERR_ANYBUSERR   "A bus-error has occured"
#define    IDS_STR_EN_ERR_QRCVEMPTY   "The receive queue is empty"
#define    IDS_STR_EN_ERR_QOVERRUN    "The receive queue was read too late"
#define    IDS_STR_EN_ERR_QXMTFULL    "The transmit queue is full"
#define    IDS_STR_EN_ERR_REGTEST     "The test of the CAN controller hardware registers failed (no hardware found)"
#define    IDS_STR_EN_ERR_NODRIVER    "The driver is not loaded"
#define    IDS_STR_EN_ERR_RESOURCE    "A resource (FIFO, Client, timeout) cannot be created"
#define    IDS_STR_EN_ERR_ILLPARAMTYPE "An invalid parameter was specified"
#define    IDS_STR_EN_ERR_ILLPARAMVAL "A parameter contains an invalid value"
#define    IDS_STR_EN_ERR_ILLHANDLE   "The value of a handle (PCAN-Channel, PCAN-Hardware, PCAN-Net, PCAN-Client) is invalid"
#define    IDS_STR_EN_ERR_INITIALIZE  "A PCAN Channel has not been initialized yet or the initialization process has failed"
#define    IDS_STR_EN_ERR_UNKNOW      "An unknown error has occurred"
#define    IDS_STR_EN_ERR_HWINUSE     "The PCAN-Hardware is already being used by a PCAN-Net"
#define    IDS_STR_EN_ERR_NETINUSE    "A PCAN-Client is already connected to the PCAN-Net"
#define    IDS_STR_EN_ERR_ILLHW       "The value of a PCAN-Hardware handle is invalid"
#define    IDS_STR_EN_ERR_ILLNET      "The value of a PCAN-Net handle is invalid"
#define    IDS_STR_EN_ERR_ILLCLIENT   "The value of a PCAN-Client handle is invalid"

#define    IDS_STR_ES_ERR_OK          "Sin errores"
#define    IDS_STR_ES_ERR_XMTFULL     "El buffer de transmisi??n del controlador CAN est?? lleno"
#define    IDS_STR_ES_ERR_OVERRUN     "El controlador CAN se ley?? muy tarde"
#define    IDS_STR_ES_ERR_BUSLIGHT    "Error en el Bus : Un contador de errores alcanz?? el l??mite 'light'"
#define    IDS_STR_ES_ERR_BUSHEAVY    "Error en el Bus : Un contador de errores alcanz?? el l??mite 'heavy'"
#define    IDS_STR_ES_ERR_BUSOFF      "Error en el Bus : El controlador CAN se encuentra en el estado 'bus-off'"
#define    IDS_STR_ES_ERR_ANYBUSERR   "A ocurrido un error en el Bus"
#define    IDS_STR_ES_ERR_QRCVEMPTY   "La cola de recepci??n de mensajes est?? vac??a"
#define    IDS_STR_ES_ERR_QOVERRUN    "La cola de recepci??n de mensajes fu?? le??da demasiado tarde"
#define    IDS_STR_ES_ERR_QXMTFULL    "La cola de transmisi??n de mensajes est?? llena"
#define    IDS_STR_ES_ERR_REGTEST     "El test de registro de hardware del controador CAN fall?? (no se encontr?? ning??n hardware)"
#define    IDS_STR_ES_ERR_NODRIVER    "El driver no se ha cargado"
#define    IDS_STR_ES_ERR_RESOURCE    "Alg??n recurso (FIFO, Client, timeout) no pudo ser creado"
#define    IDS_STR_ES_ERR_ILLPARAMTYPE "El par??metro dado es inv??lido"
#define    IDS_STR_ES_ERR_ILLPARAMVAL "El valor del par??metro dado es inv??lido"
#define    IDS_STR_ES_ERR_ILLHANDLE   "El valor del manejador (handle de: PCAN-Channel, PCAN-Hardware, PCAN-Net, PCAN-Client) es inv??lido"
#define    IDS_STR_ES_ERR_INITIALIZE  "El canal PCAN a??n no ha sido inicializado o el proceso de inicializaci??n ha fallado"
#define    IDS_STR_ES_ERR_UNKNOW      "Ha ocurrido un error desconocido"
#define    IDS_STR_ES_ERR_HWINUSE     "El dispositivo (PCAN-Hardware) ya est?? siendo utilizado por una red (PCAN-Net)"
#define    IDS_STR_ES_ERR_NETINUSE    "Un cliente (PCAN-Client) ya est?? conectado a la red (PCAN-Net)"
#define    IDS_STR_ES_ERR_ILLHW       "El valor del manejador (handle) de un dispositivo (PCAN-Hardware) es inv??lido"
#define    IDS_STR_ES_ERR_ILLNET      "El valor del manejador (handle) de una red (PCAN-Net) es inv??lido"
#define    IDS_STR_ES_ERR_ILLCLIENT   "El valor del manejador (handle) de un cliente (PCAN-Client) es inv??lido"

#define    IDS_STR_FR_ERR_OK          "Aucune erreur"
#define    IDS_STR_FR_ERR_XMTFULL     "Le buffer de transmission dans le contr??leur CAN est plein"
#define    IDS_STR_FR_ERR_OVERRUN     "Le contr??leur CAN a ??t?? lu trop tard"
#define    IDS_STR_FR_ERR_BUSLIGHT    "Erreur de bus: un compteur d'erreurs a atteint la limite 'light'"
#define    IDS_STR_FR_ERR_BUSHEAVY    "Erreur de bus: un compteur d'erreurs a atteint la limite 'heavy'"
#define    IDS_STR_FR_ERR_BUSOFF      "Erreur de bus: le contr??leur CAN est pass?? ?? l'??tat 'bus-off'"
#define    IDS_STR_FR_ERR_ANYBUSERR   "Une erreur de bus a ??t?? d??tect??e"
#define    IDS_STR_FR_ERR_QRCVEMPTY   "La queue de r??ception est vide "
#define    IDS_STR_FR_ERR_QOVERRUN    "La queue de r??ception a ??t?? lue trop tard"
#define    IDS_STR_FR_ERR_QXMTFULL    "La queue de transmission est vide "
#define    IDS_STR_FR_ERR_REGTEST     "Le test du mat??riel du contr??leur CAN enregistr?? a ??chou?? (aucun mat??riel d??tect??)"
#define    IDS_STR_FR_ERR_NODRIVER    "Le driver n'est pas charg??"
#define    IDS_STR_FR_ERR_RESOURCE    "Une ressource (FIFO, Client, timeout) ne peut pas ??tre cr????e"
#define    IDS_STR_FR_ERR_ILLPARAMTYPE "Un param??tre invalide a ??t?? sp??cifi??"
#define    IDS_STR_FR_ERR_ILLPARAMVAL "Un param??tre contient une valeur invalide"
#define    IDS_STR_FR_ERR_ILLHANDLE   "La valeur d'un Handle (PCAN-Channel, PCAN-Hardware, PCAN-Net, PCAN-Client) est incorrecte"
#define    IDS_STR_FR_ERR_INITIALIZE  "Un canal PCAN n'a pas encore ??t?? initialis?? ou son initialisation a ??chou??"
#define    IDS_STR_FR_ERR_UNKNOW      "Une erreur inconnue s'est produite"
#define    IDS_STR_FR_ERR_HWINUSE     "Le PCAN-Hardware est d??j?? utilis?? par un PCAN-Net"
#define    IDS_STR_FR_ERR_NETINUSE    "Un PCAN-Client est d??j?? connect?? ?? l'PCAN-Net"
#define    IDS_STR_FR_ERR_ILLHW       "La valeur d'un PCAN-Hardware handle est incorrecte"
#define    IDS_STR_FR_ERR_ILLNET      "La valeur d'un PCAN-Net handle est incorrecte"
#define    IDS_STR_FR_ERR_ILLCLIENT   "La valeur d'un PCAN-Client handle est incorrecte"

#define    IDS_STR_IT_ERR_OK          "Senza errori"
#define    IDS_STR_IT_ERR_XMTFULL     "Il buffer di trasmissione del controllore CAN ?? pieno"
#define    IDS_STR_IT_ERR_OVERRUN     "Il controllore CAN ?? stato letto troppo tardi"
#define    IDS_STR_IT_ERR_BUSLIGHT    "Errore di Bus: un contatore di errore ha raggiunto il limite 'light'"
#define    IDS_STR_IT_ERR_BUSHEAVY    "Errore di Bus: un contatore di errore ha raggiunto il limite 'heavy'"
#define    IDS_STR_IT_ERR_BUSOFF      "Errore di Bus: il controllore CAN ?? in 'bus-off' stato"
#define    IDS_STR_IT_ERR_ANYBUSERR   "Vi ?? stato un errore di bus"
#define    IDS_STR_IT_ERR_QRCVEMPTY   "La coda di ricezione ?? vuota"
#define    IDS_STR_IT_ERR_QOVERRUN    "La coda di ricezione ?? stato letto troppo tardi"
#define    IDS_STR_IT_ERR_QXMTFULL    "La coda di trasmissione ?? piena"
#define    IDS_STR_IT_ERR_REGTEST     "La prova della registrazione di un controllore CAN hardware fallito (nessun hardware trovato)"
#define    IDS_STR_IT_ERR_NODRIVER    "Il driver non ?? caricato"
#define    IDS_STR_IT_ERR_RESOURCE    "Una risorsa (FIFO, Cliente, timeout) non pu?? essere creato"
#define    IDS_STR_IT_ERR_ILLPARAMTYPE "Un parametro non valido ?? stato specificato"
#define    IDS_STR_IT_ERR_ILLPARAMVAL "Un parametro contiene un valore non valido"
#define    IDS_STR_IT_ERR_ILLHANDLE   "Un valore di handle (PCAN-Channel, PCAN-Hardware, PCAN-Net, PCAN-Client)  ?? sbagliato"
#define    IDS_STR_IT_ERR_INITIALIZE  "Un canale PCAN non ?? stata inizializzata, o ancora il processo di inizializzazione non ?? riuscito"
#define    IDS_STR_IT_ERR_UNKNOW      "Un errore sconosciuto si ?? verificato"
#define    IDS_STR_IT_ERR_HWINUSE     "L'PCAN-Hardware ?? gi?? in uso da una PCAN-Net"
#define    IDS_STR_IT_ERR_NETINUSE    "Un PCAN-Client ?? gi?? connesso alla PCAN-Net"
#define    IDS_STR_IT_ERR_ILLHW       "Il valore  del handle di un PCAN-Hardware ?? sbagliato"
#define    IDS_STR_IT_ERR_ILLNET      "Il valore  del handle di una PCAN-Net ?? sbagliato"
#define    IDS_STR_IT_ERR_ILLCLIENT   "Il valore  del handle di un PCAN-Client ?? sbagliato"

const char* resource[IDS_STR_IND_LANG_NUM][IDS_STR_IND_ERR_LANG_NUM] = {
		{ IDS_STR_DE_ERR_OK, IDS_STR_DE_ERR_XMTFULL, IDS_STR_DE_ERR_OVERRUN,
				IDS_STR_DE_ERR_BUSLIGHT, IDS_STR_DE_ERR_BUSHEAVY,
				IDS_STR_DE_ERR_BUSOFF, IDS_STR_DE_ERR_ANYBUSERR,
				IDS_STR_DE_ERR_QRCVEMPTY, IDS_STR_DE_ERR_QOVERRUN,
				IDS_STR_DE_ERR_QXMTFULL, IDS_STR_DE_ERR_REGTEST,
				IDS_STR_DE_ERR_NODRIVER, IDS_STR_DE_ERR_RESOURCE,
				IDS_STR_DE_ERR_ILLPARAMTYPE, IDS_STR_DE_ERR_ILLPARAMVAL,
				IDS_STR_DE_ERR_ILLHANDLE, IDS_STR_DE_ERR_INITIALIZE,
				IDS_STR_DE_ERR_UNKNOW, IDS_STR_DE_ERR_HWINUSE,
				IDS_STR_DE_ERR_NETINUSE, IDS_STR_DE_ERR_ILLHW,
				IDS_STR_DE_ERR_ILLNET, IDS_STR_DE_ERR_ILLCLIENT }, {
				IDS_STR_EN_ERR_OK, IDS_STR_EN_ERR_XMTFULL,
				IDS_STR_EN_ERR_OVERRUN, IDS_STR_EN_ERR_BUSLIGHT,
				IDS_STR_EN_ERR_BUSHEAVY, IDS_STR_EN_ERR_BUSOFF,
				IDS_STR_EN_ERR_ANYBUSERR, IDS_STR_EN_ERR_QRCVEMPTY,
				IDS_STR_EN_ERR_QOVERRUN, IDS_STR_EN_ERR_QXMTFULL,
				IDS_STR_EN_ERR_REGTEST, IDS_STR_EN_ERR_NODRIVER,
				IDS_STR_EN_ERR_RESOURCE, IDS_STR_EN_ERR_ILLPARAMTYPE,
				IDS_STR_EN_ERR_ILLPARAMVAL, IDS_STR_EN_ERR_ILLHANDLE,
				IDS_STR_EN_ERR_INITIALIZE, IDS_STR_EN_ERR_UNKNOW,
				IDS_STR_EN_ERR_HWINUSE, IDS_STR_EN_ERR_NETINUSE,
				IDS_STR_EN_ERR_ILLHW, IDS_STR_EN_ERR_ILLNET,
				IDS_STR_EN_ERR_ILLCLIENT }, { IDS_STR_ES_ERR_OK,
				IDS_STR_ES_ERR_XMTFULL, IDS_STR_ES_ERR_OVERRUN,
				IDS_STR_ES_ERR_BUSLIGHT, IDS_STR_ES_ERR_BUSHEAVY,
				IDS_STR_ES_ERR_BUSOFF, IDS_STR_ES_ERR_ANYBUSERR,
				IDS_STR_ES_ERR_QRCVEMPTY, IDS_STR_ES_ERR_QOVERRUN,
				IDS_STR_ES_ERR_QXMTFULL, IDS_STR_ES_ERR_REGTEST,
				IDS_STR_ES_ERR_NODRIVER, IDS_STR_ES_ERR_RESOURCE,
				IDS_STR_ES_ERR_ILLPARAMTYPE, IDS_STR_ES_ERR_ILLPARAMVAL,
				IDS_STR_ES_ERR_ILLHANDLE, IDS_STR_ES_ERR_INITIALIZE,
				IDS_STR_ES_ERR_UNKNOW, IDS_STR_ES_ERR_HWINUSE,
				IDS_STR_ES_ERR_NETINUSE, IDS_STR_ES_ERR_ILLHW,
				IDS_STR_ES_ERR_ILLNET, IDS_STR_ES_ERR_ILLCLIENT }, {
				IDS_STR_FR_ERR_OK, IDS_STR_FR_ERR_XMTFULL,
				IDS_STR_FR_ERR_OVERRUN, IDS_STR_FR_ERR_BUSLIGHT,
				IDS_STR_FR_ERR_BUSHEAVY, IDS_STR_FR_ERR_BUSOFF,
				IDS_STR_FR_ERR_ANYBUSERR, IDS_STR_FR_ERR_QRCVEMPTY,
				IDS_STR_FR_ERR_QOVERRUN, IDS_STR_FR_ERR_QXMTFULL,
				IDS_STR_FR_ERR_REGTEST, IDS_STR_FR_ERR_NODRIVER,
				IDS_STR_FR_ERR_RESOURCE, IDS_STR_FR_ERR_ILLPARAMTYPE,
				IDS_STR_FR_ERR_ILLPARAMVAL, IDS_STR_FR_ERR_ILLHANDLE,
				IDS_STR_FR_ERR_INITIALIZE, IDS_STR_FR_ERR_UNKNOW,
				IDS_STR_FR_ERR_HWINUSE, IDS_STR_FR_ERR_NETINUSE,
				IDS_STR_FR_ERR_ILLHW, IDS_STR_FR_ERR_ILLNET,
				IDS_STR_FR_ERR_ILLCLIENT }, { IDS_STR_IT_ERR_OK,
				IDS_STR_IT_ERR_XMTFULL, IDS_STR_IT_ERR_OVERRUN,
				IDS_STR_IT_ERR_BUSLIGHT, IDS_STR_IT_ERR_BUSHEAVY,
				IDS_STR_IT_ERR_BUSOFF, IDS_STR_IT_ERR_ANYBUSERR,
				IDS_STR_IT_ERR_QRCVEMPTY, IDS_STR_IT_ERR_QOVERRUN,
				IDS_STR_IT_ERR_QXMTFULL, IDS_STR_IT_ERR_REGTEST,
				IDS_STR_IT_ERR_NODRIVER, IDS_STR_IT_ERR_RESOURCE,
				IDS_STR_IT_ERR_ILLPARAMTYPE, IDS_STR_IT_ERR_ILLPARAMVAL,
				IDS_STR_IT_ERR_ILLHANDLE, IDS_STR_IT_ERR_INITIALIZE,
				IDS_STR_IT_ERR_UNKNOW, IDS_STR_IT_ERR_HWINUSE,
				IDS_STR_IT_ERR_NETINUSE, IDS_STR_IT_ERR_ILLHW,
				IDS_STR_IT_ERR_ILLNET, IDS_STR_IT_ERR_ILLCLIENT } };

