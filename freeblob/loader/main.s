.sect .text
.global _start
_start:
	bl blob
.global blob
    .global blob_sizes
blob:
    .incbin "payload.bin"
1:
blob_size:
    .int 1b - blob