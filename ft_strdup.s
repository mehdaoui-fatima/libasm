section .text
global _ft_strdup

extern ft_strlen
extern ft_strcpy
extern malloc


_ft_strdup: 
            call ft_strlen   ; takes rdi='hello' return rax=5
            push rdi    ;the value saved now is in memory
            mov rdi,rax
            add rdi,1   ; for '\0'  
            call malloc      ;malloc takes rdi in first arg (refers to how many bytes should be allocated )
                        ;and return rax as a ponter to the allocated memory)
                        ;so we have to push rdi in stack to pop it out later and stock the rax returned by strlen in rdi
            mov rdi,rax ; clear ra from it value so can strcopy work with it
            pop rsi     ; pop the value f first rdi stored in memory to rsi, rsi= 'hello'
            call ft_strcpy 
            jmp return

return:     ret