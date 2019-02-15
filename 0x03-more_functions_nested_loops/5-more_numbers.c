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
		j = 0;
		while (more_numbers[j])
			_putchar(more_numbers[j++]);
		k = 0;
		while (more_numbers_the_sequel[k])
			_putchar(more_numbers_the_sequel[k++]);
	}
}
