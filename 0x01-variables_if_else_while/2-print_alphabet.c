#include <stdio.h>

/**
 * main - main function
 * @void: takes no argruments
 *
 * Description: prints alphabet
 * Test
 * Return: 0
 */

int	main(void)
{
	char	l;

	l = '`';
	while (++l < '{')
		putchar(l);
	putchar('\n');
	return (0);
}
