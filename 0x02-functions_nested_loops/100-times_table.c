#include "holberton.h"

/**
 * print_spaces - prints spaces
 * @num: next number in sequence
 *
 * Description: prints correct number of spaces for table
 * Return: ;
 */
void	print_spaces(int num)
{
	int	spaces, digits;

	if (num < 10)
		digits = 3;
	else if (num > 9 && num < 100)
		digits = 2;
	else
		digits = 1;
	for (spaces = 0; spaces < digits; spaces++)
		_putchar(' ');
}

/**
 * print_num - prints number
 * @num: number to print
 *
 * Description: prints number recursively
 * Return: ;
 */
void	print_num(int num)
{
	if (num < 10)
		_putchar(num + '0');
	else if (num > 9)
	{
		print_num(num / 10);
		print_num(num % 10);
	}
}
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: end point
 *
 * Description: uses two loops with rules to print n times tables
 * starting with zero calls print_num and print_spaces
 * Return: ;
 */
void	print_times_table(int n)
{
	int	i, j, product;

	if (n > -1 && n < 16)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				product = i * j;
				print_num(product);
				if (j == n)
					break;
				_putchar(',');
				print_spaces(product + i);
			}
			_putchar('\n');
		}
	}
}
