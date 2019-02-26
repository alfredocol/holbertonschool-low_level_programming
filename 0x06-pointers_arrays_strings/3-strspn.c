#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: # of bytes in the initial segment of s\
 * which consist only of bytes from accept
 */
unsigned	int _strspn(char *s, char *accept)
{
	int	i, j, match, max, sum;

	sum = 0;
	max = 0;
	i = 0;
	while (s[i])
	{
		match = 0;
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				match += 1;
				break;
			}
			j++;
		}
		if (match)
			sum += 1;
		else
			sum = 0;
		if (sum > max)
			max = sum;
		i++;
	}
	return ((unsigned int) max);
}
