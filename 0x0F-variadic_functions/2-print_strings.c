#include <stdarg.h>
#include <stdio.h>

void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list	list;
	char	*s;

	va_start(list, n);
	while (s = va_arg(list, char *))
		printf("%s\n", s);
	va_end(list);
}
