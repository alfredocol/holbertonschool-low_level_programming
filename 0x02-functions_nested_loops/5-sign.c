#include "holberton.h"

/**
 * print_sign - prints sign of n
 * @n: integer
 *
 * Description: prints sign of a number
 * Return: 1 if positive, 0 if 0 and -1 if negative
 */
int	print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
