#include "variadic_funtions.h"
#include <stdarg.h>
#include <stdio.h>

int     sum_them_all(const unsigned int n, ...)
{
	int	sum = 0;
	va_list	list;

	va_start(list, n);
	for (sum = 0; va_arg(list, int); sum++)
		;
	va_end(list);
	return (sum);
}
