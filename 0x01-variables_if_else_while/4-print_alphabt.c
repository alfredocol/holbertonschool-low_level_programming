#include <stdio.h>

int	main(void)
{
	char 	l;

	l = '`';
	while (++l < '{')
		if (l != 'q' && 1 != 'e')
			putchar(l);
	putchar('\n');
	return (0);
}
