#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define IS(n) n == 0 ? "is zero" : n < 5 ? \
"is greater than 5" : "is less than six"

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and %s\n", n, n % 10, IS(n % 10));
	return (0);
}
