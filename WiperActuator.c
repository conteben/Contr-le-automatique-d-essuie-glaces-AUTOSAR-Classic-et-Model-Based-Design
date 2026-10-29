#include "Std_Types.h"
#include <stdio.h>

/* Runnable associé au composant WiperActuator */


void WiperActuator_SetSpeed(uint8 speed){
    printf("[Actionneur] > Moteur commandé à la vitesse : ");

    switch(speed){
        case 0:
            printf("ARRET\n");
            break;
        case 1:
            printf("INTERMITTENT\n");
            break;
        case 2:
            printf("CONTINU (RAPIDE)\n");
            break;
        default:
            printf("ERREUR (Inconnue)\n");
            break;

    }

    printf("----------------------------------------------------------");
}