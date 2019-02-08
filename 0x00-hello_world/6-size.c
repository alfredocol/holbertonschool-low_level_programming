#include <stdio.h>

/**
 * main - returns 0
 * @void: void*
 * Description: print out size of data
 * types char, int, long int, long long, float.
 * Return: 0
 */
int	main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
