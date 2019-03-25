#include "lists.h"
/**
 * sum_listint - prints all the elements of a listint_t list
 * @head: pointer to head node
 *
 * Return: the number of nodes
 */
int	sum_listint(listint_t *head)
{
	listint_t	*temp;
	int		sum = 0;

	/* NULL check */
	if (!head)
		return (0);
	/* Loop and print */
	for (temp = head; temp; temp = temp->next)
		sum += temp->n;
	return (sum);
}
