#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at nth index
 * @head: pointer to address of head node
 * @index: nth index
 *
 * Return: 1 if success, -1 if not
 */
int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t	*cur, *prev, *next;
	unsigned int	i;

	/* NULL check */
	if (!head || !*head)
		return (-1);
	for (i = 0, cur = *head; cur; prev = cur, cur = cur->next, i++)
	{
		if (i == index)
		{
			next = cur->next;
			free(cur);
			if (i)
				prev->next = next;
			else
				*head = next;
			return (1);
		}
	}
	return (-1);
}
