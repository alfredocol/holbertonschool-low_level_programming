#include "holberton.h"
#include <stdio.h>

/**
 * isprime - returns 1 if prime
 * @n: int
 *
 * Description: tests if prime
 * Return: 1 if prime, else 0
 */
int	isprime(int n)
{
	int		i;

	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	for (i = 2; i < n / 2; i++)
		if (!(n / i))
			return (0);
	return (1);
}
/**
 * prime_factor - prints largest prime factor of the number
 * 612852475143
 * @void: void
 *
 * Description: see prime_factor
 * Return: ;
 */
void	_prime(unsigned long n)
{
	unsigned long	i, prime, largest_prime;
	
	largest_prime = n;
	for (prime = 2; prime < largest_prime; prime++)
		if (isprime(prime))
			while (!(largest_prime % prime))
				largest_prime = largest_prime / prime;
	printf("%lu\n", largest_prime);
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
	_prime();
	return (0);
}
