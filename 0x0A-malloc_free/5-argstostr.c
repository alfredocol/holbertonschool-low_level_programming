#include "holberton.h"

/**
 * argstostr - concatenates all args to string
 * @ac: arg count
 * @av: 2D array of strings
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int	len = ac;
	int	i, j, k, l;
	char	*p;
	char	*temp;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;
	p = (char *)malloc(sizeof(char) * len);
	if (!p)
		return (NULL);
	temp = p;
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
			*temp++ = av[k][l];
		*temp++ = '\n';
	}
	*temp = '\0';
	return (p);
}
