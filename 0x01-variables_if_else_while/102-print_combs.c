#include <stdio.h>

/**
 * main - main
 * @void: void
 *
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: 0
 */
int	main(void)
{
	int	i, j;

	i = -1;
	while (++i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
	}
	putchar('\n');
	return (0);
}
