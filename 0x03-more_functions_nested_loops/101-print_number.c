#include "holberton.h"

/**
 * print_number -  prints number
 * @n: number to print
 *
 * Return: void
 */
void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n > -10)
		{
			_putchar(-n + '0');
			return;
		}
		print_number(-(n / 10));
		print_number(-(n % 10));
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else if (n < 10)
		_putchar(n + '0');
}
