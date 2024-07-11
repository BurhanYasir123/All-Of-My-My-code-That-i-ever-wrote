; resolution 320x200, cx=x dx = y

cli
push 0x0A000
mov ax, 0x13

int 0x10

jmp payload

payload:
	mov ah, 0x0c 	; pixel write mode
	inc al		; increase color variable
	mov bh, 0		; page number 0
	inc cx		; increase x cordinate
	cmp cx,10000
	je func
	inc dx		; increase y cordinate
	int 0x10		; video inturrept
	jmp payload	; loop
	
func:
	mov cx, 100
	inc dx
	jmp payload

times 510-($-$$) db 0
db 0x55,0xaa