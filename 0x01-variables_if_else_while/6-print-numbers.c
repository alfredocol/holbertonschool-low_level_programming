#include <stdio.h>

/**
 * main - returns 0
 * @void: void
 *
 * Description: prints 0..9
 * Return: 0
 */
int	main(void)
{
	int	n;

	n = -1;
	while (++n < 10)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
