#include "lists.h"
/**
 * pop_listint - frees head node
 * @head: pointer to address of head node
 *
 * Return: element of head node or 0 if null
 */
int	pop_listint(listint_t **head)
{
	listint_t	*temp = NULL;
	int		n;

	/* NULL check */
	if (!head || !*head)
		return (0);
	n = (*head)->n;
	if ((*head)->next)
		temp = (*head)->next;
	free(*head);
	if (temp)
		*head = temp;
	return (n);
}
