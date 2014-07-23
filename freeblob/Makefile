start.elf: Makefile start.tmp
	vc4-elf-objcopy start.tmp start_unstripped.elf
	vc4-elf-strip start_unstripped.elf -o start.elf

payload.bin: payloads/hello_world_ackvc4.c
	ack -mrpi payloads/hello_world_ackvc4.c -o payload.bin

start.tmp: main.o testscript.x
	vc4-elf-ld -M main.o -o start.tmp -T testscript.x
main.o: loader/main.s payload.bin
	vc4-elf-as loader/main.s -o main.o
