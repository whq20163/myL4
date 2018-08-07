#ifndef MAIN_H
#define MAIN_H

#include <stm32l4xx_hal.h>

#define LD1_PIN                                GPIO_PIN_7
#define LD1_GPIO_PORT                          GPIOC
#define LD1_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOC_CLK_ENABLE()

#ifdef USING_LPUART1
#define HLPUART1_TX_PIN                         GPIO_PIN_7
#define HLPUART1_TX_GPIO_PORT                   GPIOG
#define HLPUART1_RX_PIN                         GPIO_PIN_8
#define HLPUART1_RX_GPIO_PORT                   GPIOG
#define HLPUART1_GPIO_CLK_ENABLE()              __HAL_RCC_GPIOG_CLK_ENABLE()

#endif // MAIN_H