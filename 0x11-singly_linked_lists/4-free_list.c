#include "lists.h"

/**
 * free_list - frees linked list
 * @head: pointer to head of linked list
 */
void	free_list(list_t *head)
{
	list_t  *free_me;

	if (!head)
		return;
	while (head)
	{
		free_me = head;
		head = head->next;
		free(free_me->str);
		free(free_me);
	}
}
