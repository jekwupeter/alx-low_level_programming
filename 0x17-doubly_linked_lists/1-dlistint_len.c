#include "lists.h"

/**
 * dlistint_len - counts the number of element in a linked list
 * @h: the head of the linked list
 *
 * Return: number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while(h)
	{
		nodes++
		h = h->next
	}

	return (nodes);
}
