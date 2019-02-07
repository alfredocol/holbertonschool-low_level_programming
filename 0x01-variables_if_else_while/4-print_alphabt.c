#include <stdio.h>

/**
 * main - returns 0
 * @void: void
 *
 * Description: prints a..z except q and e
 * Return: 0
 */
int	main(void)
{
	char	l;

	l = '`';
	while (++l < '{')
		if (l != 'q' && 1 != 'e')
			putchar(l);
	putchar('\n');
	return (0);
}
