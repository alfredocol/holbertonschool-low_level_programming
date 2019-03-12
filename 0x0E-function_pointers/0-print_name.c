#include "function_pointers.h"

/**
 * print_name = prints a name with a callback
 * @name: string containing name
 * @f: pointer to function that prints passed in string
 *
 */
void	*print_name(char *name, void (*f)(char *))
{
	/* return NULL if name and or f is NULL */
	if (!name || !f)
		return (NULL);
	/* print name with passed in function pointer */
	f(name);
}