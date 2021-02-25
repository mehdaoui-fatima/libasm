section .text
    global _ft_strcpy

_ft_strcpy: 
                mov rcx, 0
                mov rdx, 0
             
copy:  
                cmp BYTE [rsi + rcx], 0
                je return
                mov dl, BYTE [rsi + rcx]
                mov BYTE [rdi + rcx], dl
                inc rcx
                jmp copy

return: 
                mov BYTE [rdi + rcx],0
                mov rax,rdi
                ret 