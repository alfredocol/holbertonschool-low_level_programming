#ifndef	_0X13_BIT_MANIPULATION_HOLBERTON_H_
#define	_0X13_BIT_MANIPULATION_HOLBERTON_H_

/* headers */
#include <stdio.h>
#include <unistd.h>
/* prototypes */
int		_putchar(int);
unsigned int    binary_to_uint(const char *b);
void            print_binary(unsigned long int n);
int             get_bit(unsigned long int n, unsigned int index);
int             set_bit(unsigned long int *n, unsigned int index);
int             clear_bit(unsigned long int *n, unsigned int index);
unsigned int    flip_bits(unsigned long int n, unsigned long int m);
#endif	/* _0X13_BIT_MANIPULATION_HOLBERTON_H_ */

