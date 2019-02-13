#include "holberton.h"
#include <stdio.h>

/**
 * print - prints both parameters
 * @left: left set of numbers
 * @right: right set of numbers
 *
 * Description: outputs two int parameters
 * Return: ;
 */
void	print(unsigned long left, unsigned long right)
{
	static int	i = 1;
	/*if left == 0*/
	if (!left)
		printf("%lu, ", right);
	else if (i == 96)
		printf("%lu%lu\n", left, right);
	else
		printf("%lu%lu, ", left, right);
	i++;
}
/**
 * fibonacci - prints first n fibonacci numbers
 * @n: # of fibonacci numbers to print out
 *
 * Description: prints first n fibonacci starting from 1,2..
 * Return: ;
 */
void	fibonacci(int n)
{
	unsigned long	prev_half_l = 0;
	unsigned long	prev_half_r = 0;
	unsigned long	current_half_l = 0;
	unsigned long	current_half_r = 0;
	unsigned long	temp;
	unsigned long	temp_l = 0;
	unsigned long	temp_r = 0;
	int		i;

	/*sets value for first two sequences and sends them  off for printing*/
	prev_half_r = 1;
	current_half_r = 2;
	print(prev_half_l, prev_half_r);
	print(current_half_l, current_half_r);
	for (i = 0; i < n - 4; i++)
	{
		/*get temporary values for next sequence*/
		temp = prev_half_r + current_half_r;
		temp_r = temp % 100;
		temp_l = prev_half_l + current_half_l + (temp / 100);
		/*update prev # with current numbers values before updating current number*/
		prev_half_l = current_half_l;
		prev_half_r = current_half_r;
		/*update current # with new value*/
		current_half_l = temp_l;
		current_half_r = temp_r;
		print(current_half_l, current_half_r);
	}
	printf("\n");
}

/**
 * main - calls fibonacci, returns 0
 * @void: void
 *
 * Description: calls fibonacci, returns 0
 * Return: 0
 */
int	main(void)
{
	fibonacci(98);
	return (0);
}
