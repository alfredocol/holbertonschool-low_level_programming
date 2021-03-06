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
	char	*s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (i--)
	{
		s = va_arg(list, char *);
		printf("%s", !s ? "(nil)" : s);
		if (separator && i)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
