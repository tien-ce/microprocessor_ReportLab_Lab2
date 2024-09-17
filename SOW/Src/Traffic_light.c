/*
 * Traffic_light.c
 *
 *  Created on: Sep 2, 2024
 *      Author: thuyh
 */

#include "Traffic_light.h"
void traffic(GPIO_TypeDef * GPIOx, uint16_t LED_RED, uint16_t LED_YELLOW, uint16_t LED_GREEN, State type) {
    switch(type) {
        case RED:
            HAL_GPIO_WritePin(GPIOx, LED_RED, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOx, LED_YELLOW, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOx, LED_GREEN, GPIO_PIN_SET);
            break;
        case YELLOW:
            HAL_GPIO_WritePin(GPIOx, LED_RED, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOx, LED_YELLOW, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(GPIOx, LED_GREEN, GPIO_PIN_SET);
            break;
        case GREEN:
            HAL_GPIO_WritePin(GPIOx, LED_RED, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOx, LED_YELLOW, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOx, LED_GREEN, GPIO_PIN_RESET);
            break;
        default:
            break;
    }
}

