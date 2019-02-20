#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
int	_strlen(char *s)
{
	int	len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * puts2 - outputs one char out of 2 in string
 * @str: string
 *
 * Description: outputs one char out of 2 in string.
 * Return: void
 */

void	puts2(char *str)
{
	int	i = -2, len = _strlen(str);

	while ((i += 2) < len)
		_putchar(str[i]);
	_putchar('\n');
}
