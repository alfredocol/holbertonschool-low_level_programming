#include "holberton.h"

/**
 * isprime - returns 1 if prime
 * @n: int
 *
 * Description: tests if prime
 * Return: 1 if prime, else 0
 */
int	isprime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	for (i = 2; i < sqrt(n); i++)
		if (!(n / i))
			return (0);
	return (1);
}
/**
 * largest_prime_factor - prints largest prime factor of 612852475143
 * @void: does not take in parameters
 */
void	largest_prime_factor(void)
{
	unsigned long	i, largest = 0, n;

	n = N;

	for (i = 2; i < n; i++)
	{
		/* if i is factor of N and is prime */
		if (!(n % i) && isprime(i))
		{
			/* reduce n by n / i */
			n /= i;
			/* update largest prime */
			largest = i;
			/* break out early if n is largest prime */
			if (isprime(n))
			{
				largest = n;
				break;
			}
		}
	}
	printf("%lu\n", largest);
}
/**
 * main - main
 * @void: void
 *
 * Description: calls prime_factor
 * Return: 0
 */
int	main(void)
{
	largest_prime_factor();
	return (0);
}
