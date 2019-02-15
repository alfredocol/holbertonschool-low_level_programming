#include "holberton.h"

/**
 * print_numbers - prints 0..9 followed by newline
 * @void: no passed in parameters
 *
 * Description: prints 0..9 followed by a newline
 * Return: ;
 */
void	print_numbers(void)
{
	char	*numbers = "0123456789\n";

	while (*numbers)
		_putchar(*numbers++);
	_putchar('\n');
}
