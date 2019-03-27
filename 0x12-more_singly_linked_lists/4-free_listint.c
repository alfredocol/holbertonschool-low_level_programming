#include "lists.h"
/**
 * free_listint - frees list
 * @head: pointer to address of head node
 *
 */
void free_listint(listint_t *head)
{
	listint_t       *node;

	/* NULL check */
	if (!head)
		return;
	/* loop and free */
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
