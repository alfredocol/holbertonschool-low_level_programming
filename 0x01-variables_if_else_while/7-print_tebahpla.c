#include <stdio.h>

/**
 * main - returns 0.
 * @void - void
 *
 * Description: prints alphabet in reverse order
 * Return: 0
 */
int	main(void)
{
	char	l;

	l = '{';
	while (--l > '`')
		putchar(l);
	putchar('\n');
	return (0);
}
