#include <stdio.h>
int     print_numbers(const char *serparator, const unsigned int n, ...);
int	main(void)
{
	print_numbers((const char *)",", 0,1,2,3,4,5);
	return (0);
}
