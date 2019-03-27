#include "lists.h"
/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */
size_t  print_listint_safe(const listint_t *h)
{
	size_t		sum = 0;

	/*
	 * loop through nodes,
	 * as long as the address of the current node
	 * is less than the previous node, print
	 */
	while (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		sum++;
		if (!h->next)
			break;
		if (h->next >= h)
		{
			printf("-> [%p] %d\n", (void *)h->next, h->next->n);
			break;
		}
		h = h->next;

	}
	/* Returns: the number of nodes in the list */
	return (sum);
}
