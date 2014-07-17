.sect .text
.global _start
_start:
	bl blob
	b _start
.global blob
    .global blob_size
blob:
    .incbin "payload.bin"
1:
blob_size:
    .int 1b - blob

