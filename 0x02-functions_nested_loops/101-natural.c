#include <stdio.h>

/**
 * natural - computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * (excluded), followed by a new line.
 * @n: natural number limit
 *
 * Description: computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 * Return: ;
 */
void	natural(int n)
{
	unsigned int sum = 0;

	while (n--)
		if (!(n % 3) || !(n % 5))
			sum += n;
	printf("%d\n", sum);
}

/**
 * main - calls natural
 * @void: void
 *
 * Description: calls natural
 * Return: 0
 */
int	main(void)
{
	natural(1024);
	return (0);
}
