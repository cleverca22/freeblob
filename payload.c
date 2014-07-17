#include <pi.h>
#include <stdio.h>
void main() {
	pi_clock_speed= 250000000;
	pi_init_uart();
	puts("Hello from VC4 / C \n");
}
