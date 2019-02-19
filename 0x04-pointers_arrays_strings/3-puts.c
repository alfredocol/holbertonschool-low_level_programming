#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string
 *
 * Description: prints a string, followed by a new line
 * Return: ;
 */
void	_puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
