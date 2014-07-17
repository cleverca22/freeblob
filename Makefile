all: payload.bin start.elf
payload.bin: payload.c
	ack -mrpi payload.c -o payload.bin
main.o : main.s payload.bin
	vc4-elf-as main.s -o main.o
start.tmp: main.o
	vc4-elf-ld main.o -o start.tmp
start_unstripped.elf: start.tmp
	vc4-elf-objcopy start.tmp start_unstripped.elf
start.elf: start_unstripped.elf
	vc4-elf-strip start_unstripped.elf start.elf
clean:
	rm payload.bin main.o start.tmp start_unstripped.elf start.elf
