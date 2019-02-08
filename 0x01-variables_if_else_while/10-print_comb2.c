#include <stdio.h>

/**
 * main - returns 0
 * @void: void
 *
 * Description: prints numbers from 00..99
 * Return: 0
 */
int	main(void)
{
	int	i, j;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i == 9 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
