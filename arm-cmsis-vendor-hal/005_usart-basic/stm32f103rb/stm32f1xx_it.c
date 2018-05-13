#include "stm32f1xx_hal.h"
#include "stm32f1xx.h"
#include "stm32f1xx_it.h"

/******************************************************************************/
/*            Cortex-M3 Processor Interruption and Exception Handlers         */ 
/******************************************************************************/

/*
 * non mask-able interrupt
 */
void NMI_Handler(void)
{
	while(1);
}

/*
 * hard fault interrupt
 */
void HardFault_Handler(void)
{
  while (1);
}

/*
 * memory management fault
 */
void MemManage_Handler(void)
{
  while (1);
}

/*
 * prefetch fault, memory access fault
 */
void BusFault_Handler(void)
{
  while (1);
}

/*
 * undefined instruction or illegal state
 */
void UsageFault_Handler(void)
{
  while (1);
}

/*
 * system service call via SWI instruction
 */
void SVC_Handler(void)
{

}

/*
 * debug monitor 
 */
void DebugMon_Handler(void)
{

}

/**
* pend-able request for system service
*/
void PendSV_Handler(void)
{

}

/*
 * system tick timer
 */
void SysTick_Handler(void)
{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
}

/******************************************************************************/
/* STM32F1xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f1xx.s).                    */
/******************************************************************************/

/*
 * usart2 global interrupt
 */
void USART2_IRQHandler(void)
{

	
	/* hal interrupt functions */
	HAL_UART_IRQHandler(&huart2);
}
