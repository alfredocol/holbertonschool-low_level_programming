#include "lists.h"
/**
 * find_listint_loop - find first node in loop
 * @head: pointer to head node
 *
 * Return: the first node in loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	
	listint_t	*node = head;
	
	while (node)
	{
		if (node->next >= node)
		{
			printf("[%p] %d\n", (void *)node->next, node->next->n);
			return (node->next);
		}
		node = node->next;

	}
	return (NULL);
}
