section	.text                             ; section where to put the code
           global    _ft_strlen           ; to start the program

_ft_strlen:
           mov       rax,0

loop:
           cmp       BYTE [rdi + rax], 0
           je        return
           inc       rax
           jmp       loop 
return:
           ret

		 