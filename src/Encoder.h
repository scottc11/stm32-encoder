#ifndef __ENCODER_H
#define __ENCODER_H

#include "stm32f1xx_hal.h"
#include <stdint.h>
#include <stdbool.h>

#ifndef ENCODER_TIM
#define ENCODER_TIM                            htim2
#endif

#ifndef ENCODER_GPIO_PORT
#define ENCODER_GPIO_PORT                      GPIOA
#endif
#ifndef ENCODER_GPIO_CH1
#define ENCODER_GPIO_CH1                       GPIO_PIN_0
#endif

#ifndef ENCODER_GPIO_CH2
#define ENCODER_GPIO_CH2                       GPIO_PIN_1
#endif


extern TIM_HandleTypeDef htim2;

void Encoder_Config(void);
void Encoder_Init(void);
uint16_t Encoder_Read();
uint8_t Encoder_Direction();
#endif