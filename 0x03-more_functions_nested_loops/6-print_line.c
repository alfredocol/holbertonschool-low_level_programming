#include "holberton.h"

/**
 * print_line - prints line followed by newline
 * @n: size of line
 *
 * Description: prints line followed by newline
 * Return: ;
 */
void	print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
