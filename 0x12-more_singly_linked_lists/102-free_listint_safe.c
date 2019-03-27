#include "lists.h"
/**
 * free_listint_safe - free lists with loop
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t		sum = 0;
	listint_t	*temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		sum++;
		temp = (*h)->next;
		free(*h);
		*h = temp;
		if (!*h || (*h)->next >= *h)
			break;
	}
	return (sum);
}
