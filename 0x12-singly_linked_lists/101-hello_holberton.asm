section .data
    hello_message db "Hello, Holberton", 0
    format db "%s", 0

section .text
global main

extern printf

main:
    ; Prepare the stack for the printf function call
    sub rsp, 8

    ; Call the printf function to print the message
    mov rdi, format
    mov rsi, hello_message
    call printf

    ; Restore the stack pointer
    add rsp, 8

    ; Exit the program
    mov rax, 60      ; syscall number for exit
    xor rdi, rdi     ; exit status 0
    syscall
