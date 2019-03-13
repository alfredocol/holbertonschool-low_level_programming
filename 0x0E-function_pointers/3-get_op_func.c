#include "3-calc.h"
/**
 * get_op_func - 
 * @s: s is the operator passed as argument to the program
 * 
 * Return: This function returns a pointer to the function that\
 * corresponds to the operator given as a parameter. 
*/
int	(*get_op_func(char *s))(int a, int b)
{
	int	i = 0;
	/* array of structs, in place of the function pointer is function returning int */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};	
	/* Loop through array of structs, stopping at NULL*/
	while (ops[i].op[0])
		if (ops[i].op[0] == *s)
		/* 
		* if op matches passed in op (*s), return the function pointer of that struct
		* The function pointer will use the int's passed in and return a result.
		*/
			return (ops[i].f);
	return (NULL);	
}
