#include "lists.h"

/**
 * print_dlistint - prints all elements in the doubly linked list
 * @h: the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *ptr;

	for(ptr = head; ptr != NULL; ptr->next)
	{
		nodes++;
		printf("%d\n", ptr->n);
	}

	return (nodes);
}
