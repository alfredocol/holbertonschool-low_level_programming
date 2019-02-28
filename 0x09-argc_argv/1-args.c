#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed in
 * @argc: # of args passed in
 * @argv: array of strings
 *
 * Return: Always 0
 */
int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	printf("%d\n", --argc);
	return (0);
}
