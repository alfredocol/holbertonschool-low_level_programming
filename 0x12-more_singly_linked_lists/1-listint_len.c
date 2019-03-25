#include "lists.h"
/**
 * listint_len - counts number of elements in list.
 * @h: pointer to head node
 *
 * Return: number of elements in list
 */
size_t	listint_len(const listint_t *h)
{
	listint_t       *temp;
	size_t          sum = 0;

	/* NULL check */
	if (!h)
		return (0);
	/* Loop and print */
	for (temp = (listint_t *)h; temp; temp = temp->next, sum++)
		;
	return (sum);
}
