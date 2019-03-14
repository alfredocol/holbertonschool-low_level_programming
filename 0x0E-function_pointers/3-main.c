#include "3-calc.h"
/**
 * main - passes argv to get_op_func, error checks
 * @argc: argument count
 * @argv: commandline arguments
 *
 * Retturn: Always 0
 */
int	main(int argc, char **argv)
{
	int	num1, num2;
	char	*op;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		op = argv[2];
		printf("%d\n", get_op_func(op)(num1, num2));
	}
	else
		printf("Error\n");
	return (0);
}
