#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _aredigits - checks if string contains only digits
 * @s: string
 *
 * Return: 0 if non-digit character is found
 */
int	_aredigits(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _add - adds sums of passed number strings
 * @argc: number of arguments
 * @argv: number strings
 *
 * Return: 0 if non-digit or negative number found otherwise returns 1
 */
int	_add(int argc, char *argv[])
{
	int	sum = 0;
	int	n;

	while (--argc > 0)
	{
		n = atoi(argv[argc]);
		if (n < 0 || (!n && !_aredigits(argv[argc])))
			return (0);
		sum += n;
	}
	printf("%d\n", sum);
	return (1);
}
/**
 * main - calls add, prints error if applicable
 * @argc: number of arguments
 * @argv: passed in arguments
 *
 * Return: 0
 */
int	main(int argc, char *argv[])
{
	(void)argv;
	if (argc == 1 || (!_add(argc, argv)))
		printf("Error\n");
	return (0);
}
