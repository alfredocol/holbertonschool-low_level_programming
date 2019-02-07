#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define PRINT_SIGN(n) n<0 ? printf("is negative\n") : n==0 ? printf("is zero\n") : printf("is positive\n")

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	PRINT_SIGN(n);
	return (0);
}
