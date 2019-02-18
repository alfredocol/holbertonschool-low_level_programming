#include "holberton.h"

/**
 * more_numbers - prints 0..14 10x followed by a newline
 * @void: void
 *
 * Description: prints 0..14 10x followed by a newline.
 * Used a char i for fun--becuase it only goes up to 10
 * Return: ;
 */
void	more_numbers(void)
{
	char	i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
