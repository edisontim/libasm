section .text
	global _ft_strlen


;rdi is the first argument passed by the caller (then rsi, rdx, rcx, r8, r9)
_ft_strlen:
	xor rax,rax
	loop:
		cmp BYTE [rdi + rax],0
		je stop
		inc eax
		jmp loop
	stop:
		ret