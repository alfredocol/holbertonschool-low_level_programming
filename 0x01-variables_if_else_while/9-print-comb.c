#include <stdio.h>

int	main(void)
{
	char	*str = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	
	while (*str)
		putchar(*str++);
	putchar('\n');
	return (0);
}
