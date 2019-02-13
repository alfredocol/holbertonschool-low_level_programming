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
	_putchar(n % 10);
	return (n % 10);
}
