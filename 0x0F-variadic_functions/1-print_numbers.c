#include "variadic_functions.h"
/**
 * print_numbers - prints int from variadic arguments
 * @separator: printed between numbers
 * @n: number of strings passed in
 *
 */
void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	list;
	int	i = (int) n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (--i)
		printf("%d%s", va_arg(list, int), separator);
	printf("%d\n", va_arg(list, int));
	va_end(list);
}
