#include "lists.h"
/**
 * pop_listint - frees head node
 * @head: pointer to address of head node
 *
 * Return: element of head node or 0 if null
 */
int	pop_listint(listint_t **head)
{
	listint_t	*i;
	int		n;

	/* NULL check */
	if (!head || !*head)
		return (0);
	i = *head;
	n = i->n;
	free(*head);
	return (n);
}
