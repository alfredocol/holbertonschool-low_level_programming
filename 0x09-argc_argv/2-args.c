#include "holberton.h"
#include <stdio.h>
/**
 * printargs - prints passed in strings
 * @argc: # of arguments
 * @argv: array of strings
 *
 * Return: void
 */
void	printargs(int argc, char *argv[])
{
	int	i = -1;

	while (++i < argc)
		printf("%s\n", argv[i]);
}
/**
 * main - calls printargc
 * @argc: # of arguments
 * @argv: array of strings
 *
 * Return: 0
 */
int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	printargs(argc, argv);
	return (0);
}
