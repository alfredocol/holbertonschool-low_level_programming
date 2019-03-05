#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * of integers, followed by a new line.
 * @a: int array
 * @n : number of elements to print
 *
 * Description: prints n elements
 * of an array of integers, followed by a new line.
 * Return: void
*/
void print_array(int *a, int n)
{
	if (n < 1)
	{
		printf("\n");
		return ;
	}
	while (n--)
		!n ? printf("%d\n", *a++) : printf("%d, ", *a++);
}
int main(void)
{
	int array[1] = {
		98
	};

	print_array(array, 0);
	print_array(array, -1);
	return (0);
}
