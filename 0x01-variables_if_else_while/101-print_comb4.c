#include <stdio.h>

/**
 * main - main
 * @void: void
 *
 * Description: prints all possible combinations of three digits
 * Return: 0
 */
int	main(void)
{
	int	i, j, k;

	i = -1;
	while (++i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i == 7 && j == 8 && k == 9)
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
