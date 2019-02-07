#include <stdio.h>

void	print_alphabt(void)
{
	char 	l;

	l = '`';
	while (++l < '{')
		if (l != 'q' && 1 != 'e')
			putchar(l);
	putchar('\n');
}

int	main(void)
{
	print_alphabt();
	return (0);
}
