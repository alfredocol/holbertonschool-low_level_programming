#include "holberton.h"
/**
 * is_prime - checks if input number is prime
 * @n: int
 * @prime: int
 *
 * Return: 1 if prime, 0 if not
 */
int	is_prime(int n, int prime)
{
	if (n % prime == 0)
		return (0);
	if (prime * prime > n)
		return (1);
	return (is_prime(n, prime + 1));
}
/**
 * is_prime_number - checks if input number is prime
 * @n: int
 *
 * Return: 1 if prime, 0 if not
 */
int	is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, 2));
}
