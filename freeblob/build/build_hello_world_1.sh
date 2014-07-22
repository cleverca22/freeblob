#This  script just builds Freeblob(0.0.1A)
#Copyright (c) 2014 Mohamed MEDIOUNI

ack -mrpi payloads/hello_world_ackvc4.c -o payload.bin
vc4-elf-as loader/main.s -o main.o
vc4-elf-ld main.o -o start.tmp
vc4-elf-objcopy start.tmp -o start_unstripped.elf
vc4-elf-strip start_unstripped.elf -o start.elf
