#include "holberton.h"

/**
 * is_prime_number - checks if input number is prime
 * @n: int
 *
 * Return: 1 if prime, 0 if not
 */
int	is_prime_number(int n)
{
	static int	prime = 1;

	prime++;
	/*/printf("prime:%d\n", prime);*/
	if (n < 2)
	{
		prime = 1;
		return (0);
	}
	if (n == 2)
	{
		prime = 1;
		return (1);
	}
	if (n % prime == 0)
	{
		prime = 1;
		return (0);
	}
	if (prime * prime > n)
	{
		prime = 1;
		return (1);
	}
	return (is_prime_number(n));
}
