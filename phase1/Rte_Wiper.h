#ifndef RTE_WIPER_H
#define RTE_WIPER_H

#include "Std_Types.h"

/* Interfaces  Sender - Receiver (Transmission de variables)*/


/* API pour les RainSensor_SWC (P-Port / Provider )*/

Std_ReturnType Rte_Write_RainSensor_RainLevel(uint8 RainLevel);

/* API pour le WiperControl_SWC (R-Port / Receiver) */
Std_ReturnType Rte_Read_WiperControl_RainLevel(uint8* RainLevel);


/* Interfaces Client-Server (Execution d'actions) */

/* API pour le WiperControl_SWC (R-port / Client) 
    Demande au serveur de definir la vitesse (0=Arret, 1=Lent, 2=Rapide)
*/

Std_ReturnType Rte_Call_WiperControl_SetWiperSpeed(uint8 Speed);

#endif /* RTE_WIPER_H */