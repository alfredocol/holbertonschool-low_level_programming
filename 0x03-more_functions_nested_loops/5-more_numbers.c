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
	char	n[] = "01234567891011121314\n";

	for (i = 0; i < 10; i++)
		for (j = 0; j < 21; j++)
			_putchar((int)n[j]);
}
