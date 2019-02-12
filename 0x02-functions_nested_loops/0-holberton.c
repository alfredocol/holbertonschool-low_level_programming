#include "holberton.h"

/**
 * holberton - prints "Holberton"
 * @void: void
 *
 * Description: prints Holberton folowed by a new line
 * Return: ;
 */
void	holberton(void)
{
	char	*holberton = "Holberton\n";

	while (*holberton)
		_putchar(*holberton++);
}

/**
 * main - calls holberton() helper function, returns 0
 * @void: void
 *
 * Description: print Holberton followed by a newline
 * Return: 0
 */
int	main(void)
{
	holberton();
	return (0);
}
