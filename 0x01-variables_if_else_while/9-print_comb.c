#include <stdio.h>

/**
 * main - returns 0
 * @void: void
 *
 * Description: prints 0..9 with comman and space for n's < 9
 * Return: 0
 */
int	main(void)
{
	char	*str = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";

	while (*str)
		putchar(*str++);
	putchar('\n');
	return (0);
}
