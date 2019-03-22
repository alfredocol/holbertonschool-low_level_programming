section .data	;The data section is used for declaring constants
	msg	db "Hello, Holberton",`\n`

section .text	;The text section is for code. 
	global	_start	;tells kernel where program begins

_start:
	mov	rax, 1	;temp register, contains # for syscall
	;; file descriptor, standard output
	mov	rdi, 1		;1st argument, fd is 1 for stdout
	mov	rsi, msg	;2nd argument, pointer to string
	mov	rdx, 17		;3rd argument, # of bytes to print

	syscall			;call to write

	mov	rax, 60		;exit syscall by passing 60
	mov	rdi, 0		;exit program by passing 0 to rdi

	syscall
