#include <stdio.h>

/**
 * main - returns 0
 * @void - void
 *
 * Description: prints all possible different combinations
 * of two digits with no repititions
 * Return: 0
 */

int	main(void)
{
	int	i, j;

	i = -1;
	while (++i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
	}
	putchar('\n');
	return (0);
}
