#include "lists.h"
/**
 * find_listint_loop - find first node in loop
 * @head: pointer to head node
 *
 * Return: the first node in loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	while (h)
	{
		if (h->next >= h)
		{
			printf("Loop starts at [%p] %d\n", (void *)h->next, h->next->n);
			return (h->next);
		}
		h = h->next;

	}
	return (NULL);
}
