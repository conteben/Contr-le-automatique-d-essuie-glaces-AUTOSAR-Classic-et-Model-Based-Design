#include <unistd.h>
#include <stdio.h>

/* Declaration */
extern void RainSensor_Update(void);
extern void WiperControl_Step(void);

int main(void){
    printf("=== Demarrage de l'OS AUTOSAR (Sim) ===\n");
    printf("Appuyer sur Ctrl + C pour arreter le systeme");


    while (1)
    {
        printf("--- Debut du cycle OS ---");

        /* Acquisition */
        RainSensor_Update();

        /* Traitement */
        WiperControl_Step();


        printf("--- Fin de cycle OS ---");

        sleep(1);
    }
    
    return 0;
}