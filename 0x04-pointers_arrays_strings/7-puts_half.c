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
 * puts_half - prints second half of string
 * @str: string
 *
 * Description: prints second half of string
 * Return: void
 */
void	puts_half(char *str)
{
	int	start = 0, len = _strlen(str);

	!(len % 2) ? (start = len / 2) : (start = (len - 1) / 2);
	while (start < len)
		_putchar(str[start++]);
	_putchar('\n');
}
