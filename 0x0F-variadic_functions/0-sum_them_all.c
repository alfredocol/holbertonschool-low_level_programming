#include "variadic_funtions.h"
/**
 * sum_them_all - sums passed in va_args
 * @n: # of arguments
 *
 * Return: sum of passed in ints
 */
int	sum_them_all(const unsigned int n, ...)
{
	int	sum = 0;
	va_list	list;

	if (n < 1)
		return;
	va_start(list, n);
	for (sum = 0; n > -1; sum += va_arg(list, int))
		;
	va_end(list);
	return (sum);
}
