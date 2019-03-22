#include "list.h"
/**
 * list_len - # of elements in list_t
 * @h: pointer to head of linked list
 *
 * Return - # of elements in list_t
 */
size_t	list_len(const list_t *h)
{
	list_t  *node;
	size_t  count = 0;

	if (!h)
		return (count);
	/* If str is NULL, print [0] (nil) */
	for (node = (list_t *)h; node; node = node->next, count++)
		;
	return (count);
}
