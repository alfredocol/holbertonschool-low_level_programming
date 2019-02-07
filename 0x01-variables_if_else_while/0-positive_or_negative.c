#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define PRINT_SIGN(n) (n < 0 ? printf("%d is negative\n", n) : n == 0 ? \
printf("%d is zero\n", n) : printf("%d is positive\n", n))

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	PRINT_SIGN(n);
	return (0);
}
