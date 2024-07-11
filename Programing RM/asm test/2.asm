BITS 16
org 0x7c00

start:
	push 0x0A00
	pop es
	xor dx, dx
	xor ax, ax
	
	mov ax,0x13
	int 0x10

	jmp payload

payload:
	mov ah , 0x0C
	add al, 9
	mov bh, 0x00
	add cx, 17
	int 0x10
	jmp payload
	

	
times 510-($-$$) db 0
db 0x55, 0xAA