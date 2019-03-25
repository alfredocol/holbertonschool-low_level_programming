#include "lists.h"
/**
 * add_nodeint - adds node to list
 * @head: pointer to address of head node
 * @n: element for new node
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t       *new;

	/* NULL check */
	if (!head)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = (int) n;
	new->next = *head;
	*head = new;
	return (*head);
}
