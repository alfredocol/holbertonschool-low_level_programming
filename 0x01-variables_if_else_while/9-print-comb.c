#include <stdio.h>

/**
 * main - returns 0
 * @void: void
 *
 * Description: outputs 0..9 with a comma and space for < 9
 * Return: 0;
 */
int	main(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		if (c < '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
