#include "variadic_functions.h"
/**
 * sum_them_all - sums passed in va_args
 * @n: # of arguments
 *
 * Return: sum of passed in ints
 */
int	sum_them_all(const unsigned int n, ...)
{
	int	sum = 0;
	int	i = (int)n;
	va_list	list;

	if (!i)
		return (0);
	va_start(list, n);
	while (i--)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
