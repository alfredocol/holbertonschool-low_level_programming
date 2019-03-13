#include <stdarg.h>
#include <stdio.h>
void	test(int count, ...)
{
	va_list	ap;
	char	c;
	
	va_start(ap, count);
	printf("%lu\n", sizeof(ap));
}

int	main(void)
{
	test(5, "Lady ", "Gaga ", "is ", "hella ", "fierce.");
	return (0);
}
