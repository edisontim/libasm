section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:

	push rdi
	call _ft_strlen 

	; null terminate the string
	mov r15, rax
	

	mov rdi, rax
	inc rdi
	call _malloc

	mov rdi, rax
	mov BYTE[rdi + r15], 0
	pop rsi

	call _ft_strcpy

	ret

