#include <stdio.h>

void	print_alphabet(void)
{
	char 	l;

	l = '`';
	while (++l < '{')
		putchar(l);
	putchar('\n');
}

int	main(void)
{
	print_alphabet();
	return (0);
}
