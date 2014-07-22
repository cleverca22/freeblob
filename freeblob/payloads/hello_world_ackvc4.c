#include <pi.h>
#include <stdio.h>
/* Freeblob v0.0.1
Copyright (c) 2014 Mohamed MEDIOUNI
Contact: mohamedmediouni91 <at> gmail <dot> com .
GPLv2, license in COPYING 
*/
void main() {
  
	pi_clock_speed= 250000000;
	pi_init_uart();
while(1) {
	puts("Hello from VC4 / C !");
}

}