#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */
size_t	print_listint(const listint_t *h)
{
	listint_t	*temp;
	size_t		sum = 0;

	/* NULL check */
	if (!h)
		return (0);
	/* Loop and print */
	for (temp = (listint_t *)h; temp; temp = temp->next, sum++)
		printf("%d\n", temp->n);
	return (sum);
}
