#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to head of list
 * @index: nth index of node to return
 *
 * Return: nth node
 */
listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t	*temp;
	unsigned int	i;

	/* NULL check */
	if (!head)
		return (NULL);
	/* Loop and print */
	for (i = 0, temp = head; temp; temp = temp->next, i++)
		if (i == index)
			return (temp);
	return (NULL);
}
