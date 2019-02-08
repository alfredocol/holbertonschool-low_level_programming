#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define IS(n) n == 0 ? "and is 0" : n > 5 ? \
"and is greater than 5" : "and is less than 6 and not 0"

/**
 * main - main function
 * @void: does not take in argruments
 *
 * Description: uses macros to print out if number is zero
 * is greater than 5 or is less than six
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d %s\n", n, n % 10, IS(n % 10));
	return (0);
}
