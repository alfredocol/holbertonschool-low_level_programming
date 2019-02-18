#include <stdio.h>

/**
 * fibonacci - prints first 50 fibonacci numbers
 * @n: limit for fibonacci numbers
 *
 * Description: prints first 50 fibonacci number
 * Return: ;
 */
void	fibonacci(int n)
{
	unsigned long	n1, n2, temp;

	n1 = 1;
	n2 = 2;
	temp = 0;
	
	printf("1, 2, ");
	n -= 2;
	while (n--)
	{
		printf("%lu", temp = n1 + n2);
		if (n)
			printf(", ");
		n1 = n2;
		n2 = temp;
	}
	printf("\n");
}

/**
 * main - calls fibonacci
 * @void: void
 *
 * Description: calls fibonacci
 * Return: 0
 */
int	main(void)
{
	fibonacci(50);
	return (0);
}
