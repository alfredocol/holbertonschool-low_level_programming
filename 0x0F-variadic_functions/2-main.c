#include <stdio.h>
void	print_strings(const char *separator, const unsigned int n, ...);

int	main(void)
{
	print_strings((const char *)",", 0, "Donna", "Summer", "Is", "One", "Fierce", "Mama");
	return (0);
}
