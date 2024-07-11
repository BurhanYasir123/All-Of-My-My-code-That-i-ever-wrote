mov ah, 0x0e
mov al, 'A'
int 0x10
check:
	inc al
	cmp al, 'Z' + 1
	je kernel
	int 0x10
	jmp check



kernel:
	mov ah, 0x0e
	mov al, ' '
	loop:
		inc bx
		cmp bx, (80 * 23) + 55
		je infinite
		int 0x10
		jmp loop
	infinite:
		jmp $ 
	


times 510 - ($-$$) db 0
db 0x55, 0xaa