#include "list.h"

/**
 * _strlen - len of string
 * @s: string
 *
 * Return: len of string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while(s[len])
		;
	return (len);
}

/**
 * add_node_end - adds a new node end of linked list.
 * @h: pointer to head of linked list
 * @str: char * for new node
 *
 * Return - the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
        list_t  *node,i;

        if (!h)
                return (NULL);
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->strdup(str);
	node->len = _strlen((char *)str);
	node->next = NULL;
	for (i = *head; i-> next; node = node->next)
		;
	i->next = node;
	return (node);
}
