volatile unsigned int * const RCC_APB2ENR = (unsigned int *)0x40021018;
volatile unsigned int * const GPIOA_CRL = (unsigned int *)0x40010800;
volatile unsigned int * const GPIOA_BSR = (unsigned int *)0x40010810;
volatile unsigned int * const GPIOA_BRR = (unsigned int *)0x40010814;


void main()
{
	*RCC_APB2ENR |= (unsigned int)0x00000004;
	*GPIOA_CRL = (unsigned int)0x44244444; 

	while(1){
		int c, d;
		for (c = 1; c <= 262143; c++)
			{}
		*GPIOA_BSR = 0x20;

		for (c = 1; c <= 262143; c++)
			{}
		*GPIOA_BRR = 0x20;
	};
}