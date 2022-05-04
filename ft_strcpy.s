section .text
	global _ft_strcpy


_ft_strcpy:

	
	;set rcx to 0
	xor rcx, rcx

	loop:
		mov al, [rsi + rcx] 
		mov [rdi + rcx], al 
		cmp BYTE [rsi + rcx], 0
		je stop
		inc rcx
		jmp loop

	stop:
		mov rax, rdi
		ret

