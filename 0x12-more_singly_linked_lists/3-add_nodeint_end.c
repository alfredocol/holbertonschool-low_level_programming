#include "lists.h"
/**
 * add_nodeint_end - adds node to end of list
 * @head: pointer to address of head node
 * @n: element for new node
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t       *i, *new;

	/* NULL check */
	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = (int) n;
	new->next = NULL;
	/* if head node is NULL, let new be head node */
	if (!*head)
	{
		*head = new;
		return (new);
	}
	/* loop to last node */
	for (i = *head; i->next; i = i->next)
		;
	i->next = new;
	return (new);
}
