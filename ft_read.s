%define MACH_SYSCALL(code) 0x2000000 | code
%define READ 3 

global _ft_read
extern ___error
section .text


set_errno:
	; push rax into the stack, this is our error code. Don't know why but it doesn't work to mov r11, rax
	push rax
	call ___error
	; pop error code into rdx
	pop rdx
	; __error return a pointer to errno, so we dereference rax and store the error code there
	mov [rax], rdx
	; set return value to -1
	mov rax, -1
	ret

;rdi
_ft_read:
	mov rax, MACH_SYSCALL(READ)
	syscall
	jc set_errno
	ret