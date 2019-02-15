#include "holberton.h"

/**
 * print_most_numbers - prints 0..9 except for 2 and 4
 * @void: no passed in parameter
 *
 * Description: prints 0..9 except for 2 and 4
 * Return: ;
 */
void	print_most_numbers(void)
{
	char	*most_numbers = "01356789\n";

	while (*most_numbers)
		_putchar(*most_numbers++);
}
