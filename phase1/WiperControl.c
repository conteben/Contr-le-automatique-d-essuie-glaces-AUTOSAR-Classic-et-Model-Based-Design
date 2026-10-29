#include "Rte_Wiper.h"
#include <stdio.h>

/* Runnable associe au composant wiperControl */
void WiperControl_Step(void){
    uint8 rain_level = 0;
    uint8 requested_speed = 0;
    Std_ReturnType status;

    /* Lecture du niveau de pluie sur me bus (R-Port Sender-Receiver) */

    status = Rte_Read_WiperControl_RainLevel(&rain_level);

    if (status == RTE_E_OK){
        /* DECISION*/
        if (rain_level == 0){
            requested_speed = 0;
        } else if (rain_level <= 50){
            requested_speed = 1;
        } else {
            requested_speed = 2;
        }

        Rte_Call_WiperControl_SetWiperSpeed(requested_speed);
    } else {
        printf("[Controleur] Erreur: Impossible de lire le capteur.\n");
    }
}