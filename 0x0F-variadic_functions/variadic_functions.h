#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
/* C h files */
#include <stdarg.h>
#include <stdio.h>
/* Task prototypes */
int	_putchar(int c);
int	sum_them_all(const unsigned int n, ...);
void	print_numbers(const char *separator, const unsigned int n, ...);
void	print_strings(const char *separator, const unsigned int n, ...);
void	print_all(const char * const format, ...);
#endif
