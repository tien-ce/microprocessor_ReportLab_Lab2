#include "main.h"
#ifndef ___Traffic_light_H_
#define ___Traffic_light_H_
typedef enum{
	RED = 0, YELLOW =1,GREEN = 2

} State;
void  traffic(GPIO_TypeDef * GPIOx, uint16_t LED_RED, uint16_t LED_YELLOW, uint16_t LED_GREEN, State type);
#endif /* INC_Traffic_light_H_*/
