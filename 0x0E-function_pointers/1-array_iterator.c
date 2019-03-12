#include "function_pointers.h"

/**
 * array_iterator - iterates through array, passing each element to
 * passed in function pointer
 * @array: int array
 * @size: size_t
 * @action: function pointer
 */
void	array_iterator(int *array, size_t size, void (*action)(int))
{
	/* return NULL if size == 0, array is NULL or action is NULL */
	if (!array || size < 1 || !action)
		return (NULL);
	/* pass each element of array to action */
	while (size--)
		action(*array++);
}
