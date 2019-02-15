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
	char	*more_numbers = "0123456789";
	char	*more_numbers_the_sequel = "1011121314\n";
	char	i = -1;
	char	j, k;

	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
			_putchar(j + '0');
		k = -1;
		while (++k < 5)
		{
			_putchar('1');
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
