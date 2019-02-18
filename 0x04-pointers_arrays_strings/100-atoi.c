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
	int	neg = 0;
	int	result = 0;
	char	avoid_error;
	
	
	/*white space charcters*/
	while (*s)
	{
		if (*s == '-')
			neg *= -1;
		if (*s >= '0' && *s <= '9')
			break;
		avoid_error = *s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		avoid_error = *s++;
	}
	(avoid_error) ? (avoid_error = 0) : (avoid_error = 0);
	if (neg == 1)
		return (-result);
	return (result);
}
