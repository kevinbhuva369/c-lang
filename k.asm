; file: display_number.asm
; Assemble: nasm -f win32 display_number.asm -o display_number.obj
; Link: gcc display_number.obj -o display_number.exe

global main
extern printf
section .data
    fmt db "%d", 0        ; printf format
    num dd 123            ; number to display

section .text
main:
    push dword [num]      ; push number as argument
    push dword fmt        ; push format string
    call printf           ; call C printf
    add esp, 8            ; clean up stack (2 arguments * 4 bytes)
    ret
