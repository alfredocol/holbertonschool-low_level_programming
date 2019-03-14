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
        switch (*format)
        {
                case '\0':
                        break;
                case 's':
                        printf("%s\n", va_arg(ap, char *));
                case 'd':
                        printf("%d\n", va_arg(ap, int));
                case 'f':
                        printf("%f\n", va_arg(ap, double));
                case 'l':
                        printf("%lu\n", va_arg(ap, long));
                default:
                        format++;
        }
        va_end(list);
}
