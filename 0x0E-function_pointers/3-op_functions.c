#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: int
 * @b: int
 *
 * Return: sum of two passed in ints
 */
int	op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two ints
 * @a: int
 * @b: int
 *
 * Return: difference passed in ints
 */
int	op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - divides two ints
 * @a: int
 * @b: int
 *
 * Return: dividend of a divided by b
 */
int	op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - mods int b into int a
 * @a: int
 * @b: int
 *
 * Return: remainder of b mod a
 */
int	op_mod(int a, int b)
{
	return (a % b);
}
/**
 * op_mul - multiplies passed in ints
 * @a: int
 * @b: int
 *
 * Return: product of a and b
 */
int	op_mul(int a, int b)
{
	return (a * b);
}
