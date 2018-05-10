#include "stm32f1xx_hal.h"

static void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);

  /*Configure GPIO pin : PA5 */
  GPIO_InitStruct.Pin = GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

int main()
{

	MX_GPIO_Init();

	while(1){
		int i;
		for (i = 0; i <= 262143; i++)
			{}
		//*GPIOA_BSR = 0x20;
		GPIOA->BSRR = 0x20;

		for (i = 0; i <= 262143; i++)
			{}
		//*GPIOA_BRR = 0x20;
		GPIOA->BRR = 0x20;
	};
}