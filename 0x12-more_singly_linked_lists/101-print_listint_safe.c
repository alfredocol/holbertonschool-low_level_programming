#include "lists.h"
/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */
size_t  print_listint_safe(const listint_t *h)
{
	size_t      sum = 0;
	listint_t   *temp;

	/* If the function fails, exit the program with status 98 */
	if (!h)
		exit(98);
	temp = (listint_t *)h;
	/*
	 * loop through nodes,
	 * as long as the address of the current node
	 * is less than the previous node, print
	 */
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (!temp->next || (temp->next > temp))
			break;
		temp = temp->next;
	}
	/* Returns: the number of nodes in the list */
	return (sum);
}
