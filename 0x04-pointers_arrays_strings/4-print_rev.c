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
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 *
 * Description: prints a string, in reverse, followed by a new line.
 * Return: void
 */
void	print_rev(char *s)
{
	int	len = _strlen(s);

	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
