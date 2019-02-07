#include <stdio.h>

void	print_numbers()
{
	int	n;
	
	n = -1;
	while (++n < 10)
		putchar(n + '0');
	putchar('\n');
}

int	main(void)
{
	print_numbers();
	return (0);
}
