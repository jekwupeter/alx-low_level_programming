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
	const dlistint_t *ptr;

	for(ptr = h; ptr != NULL; ptr = ptr->next)
	{
		nodes++;
		printf("%d\n", ptr->n);
	}

	return (nodes);
}
