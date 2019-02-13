#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n..98
 * @n: starting int
 *
 * Description: loops from n..98, prints number
 * Return: ;
 */
void	print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
	}
	printf("\n");
}
