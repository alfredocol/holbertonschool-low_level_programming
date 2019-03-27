#include "lists.h"
/**
 * free_listint2 - frees list, sets head to NULL
 * @head: pointer to address of head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t       *i, *temp;

	/* NULL check */
	if (!head)
		return;
	/* loop and free */
	i = *head;
	if (!i)
		return;
	while (i)
	{
		temp = i;
		i = i->next;
		free(temp);
	}
	*head = NULL;
}
