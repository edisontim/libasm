section .text
	global _ft_strcmp

;rdi is the first argument, rsi is the 2nd
;al and dl are our holders (individual chars). al and dl stand for ALow and DLow, so the lower bits of our a and d registers
_ft_strcmp:
	xor rcx, rcx
	push rsp
	loop:
		mov al, BYTE [rdi+rcx]
		mov dl, BYTE [rsi+rcx]
		cmp al, dl
		jne stop
		cmp al, 0
		je stop
		inc rcx
		jmp loop
	stop:
		movzx r9, al
		movzx r10, dl
		sub r9, r10
		mov rax, r9
		pop rsp
		ret