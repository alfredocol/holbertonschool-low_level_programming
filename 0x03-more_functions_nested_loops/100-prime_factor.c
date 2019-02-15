#include "holberton.h"
#include <stdio.h>


/**
 * prime_factor - prints largest prime factor of the number
 * 612852475143
 * @void: void
 *
 * Description: see prime_factor
 * Return: ;
 */
void	prime_factor(void)
{
	unsigned long	n = 612852475143;
	unsigned int	n2 = n / 2;
	unsigned int	factor;
	unsigned int	prime;
	int		found = 0;

	while (n2 > 2)
{
		/*if n2 is a factor of n check if n is prime */
		if (n % n2 == 0)
		{
			prime = n2;
			factor = prime / 2;
			while (factor > 1)
			{
				if (factor == 2 && prime % 2 != 0)
				{
					printf("%d\n", prime);
					found = 1;
				}
				if (prime % factor == 0)
					break;
				factor--;
			}
		}
		if (found)
			break;
		n2--;
	}
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
	prime_factor();
	return (0);
}
