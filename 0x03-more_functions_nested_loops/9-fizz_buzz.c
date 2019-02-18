#include "holberton.h"
#include <stdio.h>

/**
 * fizz_buzz - prints 1..100 followed by new line.
 * prints Fizz for multiples of 3
 * prints Buzz for multiple of 5
 * prints FizzBuzz for multiples of 3 and 5
 * @void:
 *
 * Description: see fizz_buzz :)
 * Return: ;
 */
void	fizz_buzz(void)
{
	char	i;

	i = 0;
	while (++i < 101)
	{
		if (!(i % 3) || !(i % 5))
		{
			if (!(i % 3))
				printf("Fizz");
			if (!(i % 5))
				printf("Buzz");
		}
		else
			printf("%d", i);
		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * main - calls fizz_buzz
 * @void: void
 *
 * Description: calls fizz_buzz
 * Return: 0
 */
int	main(void)
{
	fizz_buzz();
	return (0);
}
