#include <stdio.h>

int	main(void)
{
	int	n;
	
	n = -1;
	while (++n < 10)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
