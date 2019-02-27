#include "holberton.h"

/**
 * _print_rev_recursion - prints a strin in reverse
 * @s: string to print
 *
 */
void _print_rev_recursion(char *s)
{
	static int	newline;

	if (*s)
	{
		newline++;
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	if (newline == 1)
		_putchar('\n');
}
