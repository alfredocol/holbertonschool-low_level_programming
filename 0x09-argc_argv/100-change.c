#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change - prints minimum number of coins for input
 * @money: int
 *
 * Return: # of coins to make change for an amount of money.
 */
int	change(int money)
{
	int	cents[5] = {25, 10, 5, 2, 1};
	int	sum = 0;
	int	i;

	for (i = 0; i < 5; i++)
	{
		while (cents[i] <= money)
		{
			sum++;
			money -= cents[i];
		}
		if (!money)
			break;
	}
	return (sum);
}
/**
 * main - prints return value of change or Error
 * @argc: size of argv
 * @argv: command line arguments
 *
 * Return: # of coins to make change for an amount of money.
 */
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", change(atoi(argv[1])));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
