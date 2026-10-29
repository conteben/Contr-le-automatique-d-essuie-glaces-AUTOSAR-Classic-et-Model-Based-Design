#include "Rte_Wiper.h"
#include <stdlib.h> /*Pour rand()*/
#include <stdio.h>


/* Runnable associé au composant RainSensor */
void RainSensor_Update(void){
    uint8 current_rain_level;

    /* Simulation de la pluie (valeur de 0 et 100) */

    current_rain_level = (uint8)(rand()%100);

    printf("[Capteur] Pluie detectée : %d %%\n", current_rain_level);

    /* Ecriture sur bus via l'interface Sender-REceiver (P-Port) */
    Rte_Write_RainSensor_RainLevel(current_rain_level);
}