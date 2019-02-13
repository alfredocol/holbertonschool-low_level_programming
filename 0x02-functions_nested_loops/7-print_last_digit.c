#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 *
 * Description: prints and returns last digit of number
 * Return: last digit of number
 */
int	print_last_digit(int n)
{
	int	i;

	if (n < 0)
		i = -n % 10;
	else
		i = n % 10;
	_putchar(i + '0');
	return (i);
}
