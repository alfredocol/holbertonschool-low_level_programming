#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


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
					printf("answer = %d\n", prime);
					return (void);
				}
				if (prime % factor == 0)
					break;
				factor--;
			}
		}
		n2--;
	}
}

int	main(void)
{
	prime_factor();
	return (0);
}
