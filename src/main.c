#include "main.h"

void LED_Init(void);
void UARTx_Init(void);

UART_InitTypeDef hlpuart1;

int main(void) 
{
  HAL_Init();
  LED_Init();

  while (1)
  {
    HAL_GPIO_TogglePin(LD1_GPIO_PORT, LD1_PIN);
    HAL_Delay(1000);
  }
}

void LED_Init() 
{
  LD1_GPIO_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = LD1_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(LD1_GPIO_PORT, &GPIO_InitStruct);
}

void UARTx_Init()
{
    uart
}

void SysTick_Handler(void) 
{
  HAL_IncTick();
}

