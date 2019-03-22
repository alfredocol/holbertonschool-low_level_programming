#include "variadic_functions.h"
/**
 * print_all - prints variadic arguments
 * @format: list of args
 *
 */
void	print_all(const char * const format, ...)
{
	va_list list;
	char	*s, *str;
	
	if (!format)
	{
		printf("\n");
		return;
	}
	s = (char *)format;
	va_start(list, format);
	while (*s)
	{
		switch (*s)
		{
			case 's':
				str = va_arg(list, char *);
				printf("%s", !str ? "(nil)" : str);
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			default:
				break;
		}
		if (*(s + 1))
			printf(", ");
		s++;
	}
	printf("\n");
	va_end(list);
}
