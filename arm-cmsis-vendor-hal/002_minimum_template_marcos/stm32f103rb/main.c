#include "stm32f103xb.h"

void main()
{
	//*RCC_APB2ENR |= (unsigned int)0x00000004;
	RCC->APB2ENR  |= (unsigned int)0x00000004;
	//*GPIOA_CRL = (unsigned int)0x44244444; 
	GPIOA->CRL = (unsigned int)0x44244444;
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