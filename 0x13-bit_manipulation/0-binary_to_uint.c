#include "holberton.h"
/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: stringified binary num
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int	l, sum, n;

	/* NULL check */
	if (!b)
		return (0);
	/* Get length */
	for (l = 0; b[l]; l++)
		/* return 0 if char is not '1' or '0' */
		if (b[l] != '0' && b[l] != '1')
			return (0);
	/* Loop through b, add magitudes with 1 to sum */
	n = 1;
	sum = 0;
	while (l--)
	{
		if (b[l] == '1')
			sum += n;
		n <<= 1;
	}
	return (sum);
}
