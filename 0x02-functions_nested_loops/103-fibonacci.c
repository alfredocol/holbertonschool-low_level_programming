#include "holberton.h"
#include <stdio.h>

/**
 * fibonacci_sum - prints sum of even fibonacci numbers < n
 * @n: limit for fibonacci numbers
 *
 * Description: prints sum od even fibonacci numbers < n
 * Return: ;
 */
void	fibonacci_sum(int n)
{
	int	i, n1, n2, temp, sum;

	n1 = 1;
	n2 = 2;
	temp = 0;
	sum = 2;
	while (1)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		if (n2 > n)
			break;
		if (!(n2 % 2))
			sum += n2;
		printf("fibonacci:%d %d\n", n2, sum);
	}
}

/**
 * main - calls fibonacci
 * @void: void
 *
 * Description: calls fibonacci
 * Return: 0
 */
int	main(void)
{
	fibonacci_sum(4000000);
	return (0);
}
