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
 * add_node_end - adds a new node end of linked list.
 * @head: pointer to head of linked list
 * @str: char * for new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *node, *i;

	/* NULL CHECK */
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	/* Set up new node */
	node->str = strdup(str);
	node->len = _strlen((char *)str);
	node->next = NULL;
	/* if !*head, make new node head node */
	if (!*head)
		*head = node;
	/* Loop through to the end of list */
	else
	{
		i = *head;
		while (i->next)
			i = i->next;
		i->next = node;
	}
	return (node);
}
