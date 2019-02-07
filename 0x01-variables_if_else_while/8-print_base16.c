#include <stdio.h>

/**
 * main - returns 0.
 * @void: void
 *
 * Description: prints 0..15 in hexa
 * Return: 0
 */
int	main(void)
{
	char	*hexa = "0123456789abcdef";

	while (*hexa)
		putchar(*hexa++);
	putchar('\n');
	return (0);
}
