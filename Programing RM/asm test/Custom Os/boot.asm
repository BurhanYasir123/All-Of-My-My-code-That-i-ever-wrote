[org 0x7c00]

mov [BOOT_DISK], dl

CODE_SEG equ GDT_code - GDT_start
DATA_SEG equ GDT_data - GDT_start

cli
lgdt [GDT_descriptor]
mov eax, cr0
or eax, 1
mov cr0, eax
jmp CODE_SEG:start_protected_mode

jmp $

GDT_start:                           
    GDT_null:
        dd 0x0
        dd 0x0

    GDT_code:
        dw 0xffff
        dw 0x0
        db 0x0
        db 0b10011010
        db 0b11001111
        db 0x0

    GDT_data:
        dw 0xffff
        dw 0x0
        db 0x0
        db 0b10010010
        db 0b11001111
        db 0x0

GDT_end:

GDT_descriptor:
    dw GDT_end - GDT_start - 1
    dd GDT_start

[bits 32]
start_protected_mode:
    mov ax, DATA_SEG
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax

    ; Clear the screen by filling with spaces (light gray on black)
    mov edi, 0xb8000
    mov ecx, 80 * 25  ; Rows * Columns

clear_screen_loop:
    mov word [edi], (' ' | (0x07 << 8)) ; Use attribute 0x07 (light gray on black) for spaces
    add edi, 2
    loop clear_screen_loop

    ; Print 'QEMU' on the screen
    mov edi, 0xb8000
    mov byte [edi], 'Q'
    mov byte [edi + 2], 'E'
    mov byte [edi + 4], 'M'
    mov byte [edi + 6], 'U'

    jmp $

BOOT_DISK: db 0

times 510-($-$$) db 0
dw 0xaa55
