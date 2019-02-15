#include "holberton.h"

/**
 * print_diagonal - print diagonal line on the terminal
 * @n: size of diagonal line
 *
 * Description: prints diagonal line on the terminal followed
 * by a new line
 * Return: ;
 */
void	print_diagonal(int n)
{
	int	i, spaces;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			spaces = i;
			if (i)
				while (spaces--)
					_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
