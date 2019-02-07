#include <stdio.h>

/**
 * main - returns 0
 * @void: does not take in arguments
 *
 * Description: prints lowercase and upper
 * case alphabet
 * Return: 0
 */

int	main(void)
{
	char	l;

	l = '`';
	while (++l < '{')
		putchar(l);
	l -= 59;
	while (++l < '[')
		putchar(l);
	putchar('\n');
	return (0);
}
