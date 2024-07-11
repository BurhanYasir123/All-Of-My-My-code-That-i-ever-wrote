[org 7c00h]

org 7c00h

mov ah,0x0e
mov al,30
int 0x10
start:
	mov al, 30
	int 0x10
	mov al, 31
	int 0x10
	inc bx
	cmp bx, 9999
	je screen
	jmp start
	
screen:
	cli
	push 0xA000
	pop es
	xor di,di
	xor ax,ax
	mov ax,0x13
	int 0x10
	jmp pixel
	
pixel:
	mov ah, 0x0c
	inc al
	inc al
	mov bh, 1
	inc dx
	inc cx
	inc dx
	inc cx
	inc cx
	int 0x10
	jmp pixel

times 510-($-$$) db 0
db 0x55,0xaa
