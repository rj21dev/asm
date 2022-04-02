.intel_syntax noprefix
.global	ft_read
.global ft_write
.global	ft_open
.global	ft_close
.global	ft_exit

.text
ft_read:	
	mov	rax, 0
	syscall
	ret
ft_write:	
	mov	rax, 1
	syscall
	ret
ft_open:	
	mov	rax, 2
	syscall
	ret
ft_close:	
	mov	rax, 3
	syscall
	ret
ft_exit:	
	mov	rax, 60
	syscall
	ret
