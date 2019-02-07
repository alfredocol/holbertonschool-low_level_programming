#include <stdio.h>

int	main(void)
{
	char	l;
	
	l = '`';
	while (++l < '{')
		putchar(l);
	l -= 58;
	while (++l < '[')
		putchar(l);
	putchar('\n');
	return (0);
}
