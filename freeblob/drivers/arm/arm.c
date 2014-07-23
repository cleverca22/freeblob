/* ARM support for Freeblob
Copyright (c) 2014 Mohamed MEDIOUNI
*/
#define ARM_BASE  0x7E00B000
#define PM_PROC    0x7e100110 
void *armmem;
void arm_init(void) {
	int* c0 = (int*)0x7E00B000;
	*c0 = 0x00000002 ; /* 512M memory */
	*c0 = 0x0000A000 ;
	/* IOMMU */
	int *trt = (int*)ARM_BASE+0x100;
	armmem=  malloc(65536);
	trt[0]= armmem;
	trt[1]= 0;
}
void arm_set_reset_address(int *pointer) {
	int *rpointer= (int*)armmem;
	*rpointer = pointer;
	int *reg= (int*)PM_PROC;
	*reg = 0x00001000;
	/* ARM normally on now */
}
