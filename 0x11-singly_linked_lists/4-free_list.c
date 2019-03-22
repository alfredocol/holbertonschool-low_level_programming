#include "list.h"

/**
 * free_list - frees linked list
 * @head: pointer to head of linked list
 */
void	free_list(list_t *head)
{
	list_t  *free_me;

	if (!h)
		return (NULL);
	while (head)
	{
		free_me = head;
		head = head->next;
		free_me(free_me->str);
		free_me(tmp);
	}
}
