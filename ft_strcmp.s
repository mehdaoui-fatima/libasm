section .text
    global _ft_strcmp

_ft_strcmp: mov rcx, -1
            mov rdx,0
            mov rbx,0
compare:
        inc rcx
        mov dl, BYTE [rdi + rcx]
        mov bl, BYTE [rsi + rcx]
        cmp rdx, 0
        je return
        cmp rbx, 0
        je return
        sub rdx, rbx
        ; cmp rdx,0
        ; jl less
        ; jg greater
        mov rax, rdx
        cmp rax, 0
        je compare
        ret

return: sub rdx, rbx
        ; cmp rdx,0
        ; jl less
        ; jg greater
        mov rax, rdx
        ret
; less:
;         mov rax, -1
;         ret
; greater:
;         mov rax, 1
;         ret