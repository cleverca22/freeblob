#include <pi.h>
#include <stdio.h>
#include <arm.h>
/* Freeblob v0.0.1C
Copyright (c) 2014 Mohamed MEDIOUNI
Contact: mohamedmediouni91 <at> gmail <dot> com .
GPLv2 or later , license in COPYING
*/
void main() {
	int i;
	int j;
	char *addr = 0x8000;
	pi_clock_speed= 250000000;
	pi_init_uart();
	for (i=0; i<1000; i++) {
		printf("%d\n",i);
	}
/* The ARM */
	for (j=0; j<148; j++) {
		printf("byte %d == %x\n",j,addr+j);
	}
	puts("bringing arm up");
	arm_init();
	puts("setting addr");
	arm_set_reset_address((int*)0x8000);

/* Uses UART , should be removed on release but fine currently for blinker01 */
	puts("Hello from VC4 / C !");

}
