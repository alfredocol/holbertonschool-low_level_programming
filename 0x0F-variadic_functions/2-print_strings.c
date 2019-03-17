#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by newlines
 * @separator: printed between strings
 * @n: number of strings passed in
 *
 */
void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list	list;
	int	i = (int) n;

	va_start(list, n);
	while (--i)
		printf("%s%s", va_arg(list, char *), (char *)separator);
	printf("%s\n", va_arg(list, char *));
	va_end(list);
}
