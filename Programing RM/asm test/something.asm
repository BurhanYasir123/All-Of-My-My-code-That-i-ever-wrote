mov ah, 0x0e
mov al, '.'
int 0x10
loop:
	int 0x10
	inc al
	cmp bx, 1
	je func
	cmp cx, (80 * 25) -1
	je func2
	inc bx
	inc cx
	jmp loop

func:
	xor bx,bx
	mov al, '.'
	jmp loop
func2:
	mov cx, bx
	jmp loop
	
times 510-($-$$) db 0
db 0x55,0xAA