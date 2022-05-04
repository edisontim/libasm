%define MACH_SYSCALL(code) 0x2000000 | code
%define WRITE 4


global _ft_write
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
_ft_write:
	; the syscall number is stored in rax, list is here : https://opensource.apple.com/source/xnu/xnu-1504.3.12/bsd/kern/syscalls.master
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	; if the syscall failed, the CARRY FLAG is set to 1 on MAC, so we can do a conditional jump (CF jumps if the carry flag is set to 1)
	jc set_errno
	ret