#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * aredigits - checks if string contains only digits
 * @s: string
 *
 * Return: 0 if non-digit character is found
 */
int	aredigits(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			if (*s != '-' && *s != '+')
				return (0);
		s++;
	}
	return (1);
}
/**
 * _mul - multiplies passed in number strings
 * @num1: number string
 * @num2: number string
 *
 * Return: 0 if non-digit otherwise  returns 1
 */
int     _mul(char *num1, char *num2)
{
	int	n1 = atoi(num1);
	int	n2 = atoi(num2);

	if (!n1 && !aredigits(num1))
		return (0);
	if (!n2 && !aredigits(num2))
		return (0);
	printf("%d\n", n1 * n2);
	return (1);
}
