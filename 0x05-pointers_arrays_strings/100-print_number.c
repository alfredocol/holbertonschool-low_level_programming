#include "holberton.h"
/**
 * print_number - prints number
 * @n: integer to print
 *
 * return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-(n / 10));
		print_number(-(n % 10));
	}
	if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	if (n < 10)
		_putchar(n + '0');
}
