#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: head of the dlinked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
