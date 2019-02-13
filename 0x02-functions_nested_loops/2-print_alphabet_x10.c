#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 * @void: void
 *
 * Description: prints alphabet 10x
 * Return: ;
 */
void	print_alphabet_x10(void)
{
	char	i, letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter < '{'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
