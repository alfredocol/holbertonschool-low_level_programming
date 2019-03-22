#include "list.h"

/**
 * print_list - prints all the elements of a list_t list
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
		printf("[%u] %s", node->str ? "[0] (nil)\n", node->str : node->len, node->str);
	return (count);
}
