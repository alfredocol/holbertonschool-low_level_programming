#include <stdio.h>

void	zatana()
{
	char	l;

	l = '{';
	while (--l > '`')
		putchar(l);
	putchar('\n');
}

int	main(void)
{
	zatana();
	return (0);
}
