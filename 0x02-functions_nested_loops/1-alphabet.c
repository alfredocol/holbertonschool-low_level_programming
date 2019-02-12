#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 * @void: void
 *
 * Description: prints alphabet
 * Return: ;
 */
void	print_alphabet(void)
{
	char	letter = '`';

	while (++letter < '{')
		_putchar(letter);
	_putchar('\n');
}
