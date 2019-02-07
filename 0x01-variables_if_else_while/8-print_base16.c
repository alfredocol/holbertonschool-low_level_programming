#include <stdio.h>

int	main(void)
{
	char *hexa = "0123456789abcdef";
	while (*hexa)
		putchar(*hexa++);
	putchar('\n');
	return (0);
}
