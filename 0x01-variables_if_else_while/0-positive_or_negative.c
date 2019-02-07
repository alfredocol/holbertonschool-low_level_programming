#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define PRINT_SIGN(n) (n < 0 ? printf("%d is negative\n", n) : n == 0 ? \
printf("%d is zero\n", n) : printf("%d is positive\n", n))

/**
 * main - main function
 * @void: does not take in arguments
 *
 * Description:  uses macros to check if and print out if
 * number is positive or negative
 * Return:  0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	PRINT_SIGN(n);
	return (0);
}
