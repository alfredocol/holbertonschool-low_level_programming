#include <stdarg.h>
#include <stdio.h>
void	print_numbers(const char *separator, const unsigned int m, ...)
{
	va_list	list;
	int	n;
	int	i = 0;

	va_start(list, m);
	while (n = va_arg(list, int))
		printf("%d\n", n);
	va_end(list);
}
