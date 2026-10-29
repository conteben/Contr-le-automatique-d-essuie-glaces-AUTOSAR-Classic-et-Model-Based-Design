#include "Rte_Wiper.h"
#include <stdio.h>

/*
* VIRTUAL FUNCTIONAL BUS (VFB)
*/

static uint8 Rte_Buffer_RainLevel = 0;

/* Implemetation Sender - Receiver */

Std_ReturnType Rte_Write_RainSensor_RainLevel(uint8 RainLevel){
    Rte_Buffer_RainLevel = RainLevel;
    return RTE_E_OK;
}

Std_ReturnType Rte_Read_WiperControl_RainLevel(uint8* RainLevel){
    *RainLevel = Rte_Buffer_RainLevel;
    return RTE_E_OK;
}

/* Implementation Client - Server */


/**/

extern void WiperActuator_SetSpeed(uint8 speed);

Std_ReturnType Rte_Call_WiperControl_SetWiperSpeed(uint8 Speed){
    WiperActuator_SetSpeed(Speed);
    return RTE_E_OK;
}