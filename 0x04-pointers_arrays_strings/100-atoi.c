#include "holberton.h"
/**
 * _atoi - converts string to integer
 * @s: string
 *
 * Description: converts string to integer
 * Return: integer'ized string
 */
int	_atoi(char *s)
{
	int	neg = 1;
	unsigned int	result = 0;

	while (*s)
	{
		if (*s == '-')
			neg *= -1;
		if (*s >= '0' && *s <= '9')
			break;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	if (neg == -1)
		return ((int) -result);
	return (result);
}
