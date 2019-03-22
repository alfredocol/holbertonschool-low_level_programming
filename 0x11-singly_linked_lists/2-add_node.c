#include "lists.h"

/**
 * _strlen - len of string
 * @s: string
 *
 * Return: len of string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * add_node - adds a new node to linked list.
 * @head: pointer to head of linked list
 * @str: char * for new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t  *node;

	/* NULL checking for node passed in and malloc */
	if (!head)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	/* setting elements of new node */
	node->str = strdup(str);
	node->len = (unsigned int)_strlen((char *)str);
	/* placing node at top of linked list */
	node->next = *head;
	*head = node;
	return (*head);
}
