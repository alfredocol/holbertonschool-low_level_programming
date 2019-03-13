#include <stdio.h>
int     sum_them_all(const unsigned int n, ...);
int	main(void)
{
	int	sum;
	
	sum = sum_them_all(5, 4,4);
	printf("%d\n", sum);
	return (0);
}
