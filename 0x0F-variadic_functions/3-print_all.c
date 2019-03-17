#include "variadic_functions.h"
/**
 * print_all - prints variadic arguments
 * @format: string with types
 *
 */
void	print_all(const char * const format, ...)
{
	va_list list;

	va_start(list, format);
	while (*format)
	{
		switch (*format)
		{
			case '\0':
				break;
			case 's':
				printf("%s\n", va_arg(list, char *));
				break;
			case 'd':
				printf("%d\n", va_arg(list, int));
				break;
			case 'f':
				printf("%f\n", va_arg(list, double));
				break;
			case 'l':
				printf("%lu\n", va_arg(list, long));
				break;
			default:
				format++;
		}
		format++;
	}
	va_end(list);
}
