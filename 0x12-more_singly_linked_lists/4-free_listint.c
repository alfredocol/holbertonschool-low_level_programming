#include "lists.h"
/**
 * free_listint - frees list
 * @head: pointer to address of head node
 *
 */
void free_listint(listint_t *head)
{
	listint_t       *i, *temp;

	/* NULL check */
	if (!head)
		return;
	/* loop and free */
	i = head;
	while (i->next)
	{
		temp = i;
		i = i->next;
		free(temp);
	}
}
