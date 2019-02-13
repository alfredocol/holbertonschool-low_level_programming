#include "holberton.h"
/**
 * putnum - helper function for printing number
 * @num: integer
 *
 * Description: prints number
 * Return: ;
 */
void	putnum(int num)
{
	if (num < 10)
		_putchar(num + '0');
	else
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
}
/**
 * times_table - prints the 9 times table, starting with 0
 * @void: void
 *
 * Description: prints the 9 times table, starting with 0
 * Return: void
 */
void	times_table(void)
{
	int	i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putnum(i * j);
			if (j == 9)
				break;
			_putchar(',');
			if ((i * j + i) < 10)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
