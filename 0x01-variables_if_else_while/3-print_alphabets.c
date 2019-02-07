#include <stdio.h>

void	print_alphabets(void)
{
	char	l;
	
	l = '`';
	while (++l < '{')
		putchar(l);
	l -= 58;
	while (++l < '[')
		putchar(l);
	putchar('\n');
}

int	main(void)
{
	print_alphabets();
	return (0);
}
