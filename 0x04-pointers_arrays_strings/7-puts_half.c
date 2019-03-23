#include "holberton.h"

/**
 * puts_half - prints second half of string
 * @str: string
 *
 * Description: prints second half of string
 * Return: void
 */
void	puts_half(char *str)
{
	int	i, len = 0;

	while (str[len])
		len++;
	for (i = len / 2 + (len % 2 ? 1 : 0); i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
