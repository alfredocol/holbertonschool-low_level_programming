#include "lists.h"
/**
 * reverse_listint - reverses list
 * @head: pointer to address of head node
 *
 * Return: pointer to first node
 */
listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*next, *prev = NULL;

	/* NULL check */
	if (!head || !*head)
		return (NULL);
	next = (*head)->next;
	while (next)
	{
		next = (*head)->next;
		if (prev)
			(*head)->next = prev;
		else
		{
			prev = *head;
			prev->next = NULL;
		}
		prev = *head;
		if (next)
			*head = next;
	}
	return (*head);
}
