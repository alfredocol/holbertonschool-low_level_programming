#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t	print_list(const list_t *h)
{
	list_t	*node;
	size_t	count = 0;

	if (!h)
		return (count);
	/* If str is NULL, print [0] (nil) */
	for (node = (list_t *)h; node; node = node->next)
	{
		if (node->str)
			printf("[%u] %s\n", node->len, node->str);
		else
			printf("[%u] %s\n", 0, "(nil)");
		count++;
	}
	return (count);
}
