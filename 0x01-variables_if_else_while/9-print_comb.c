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
	int	n;

	n = -1;
	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
