#include "lists.h"

/**
 * sum_dlistint - Sums all the data in dlinked list
 * @head: head of dlinked list
 *
 * Return: sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
