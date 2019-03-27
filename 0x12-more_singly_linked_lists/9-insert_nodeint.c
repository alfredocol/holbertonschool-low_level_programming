#include "lists.h"
/**
 * add_nodeint - adds node to list
 * @head: pointer to address of head node
 * @n: element for new node
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t       *add_nodeint(listint_t **head, const int n)
{
	listint_t       *new;

	/* NULL check */
	if (!head)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = (int) n;
	new->next = *head;
	*head = new;
	return (*head);
}
/**
 * insert_nodeint_at_index - insert node at nth index
 * @head: pointer to head node
 * @idx: nth index
 * @n: int for new node
 *
 * Return: the address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t	*cur, *prev, *new;
	unsigned int	i;

	/* NULL check */
	if (!head)
		return (NULL);
	/* add to beginning of empty list */
	if (!*head && !idx)
		return (add_nodeint(head, (const int) n));
	/* Loop and insert */
	for (i = 0, cur = *head; cur; prev = cur, cur = cur->next, i++)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			prev->next = new;
			new->next = cur;
			return (new);
		}
	}
	return (NULL);
}
