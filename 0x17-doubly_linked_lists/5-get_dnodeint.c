#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node in a dlinked list.
 * @head: head of the dlinked list.
 * @index: index of node to find
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the node to find.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        unsigned int idx = 0;
        while(head)
        {
                if (idx == index)
                        return (head);

                head = head->next;
                idx++;
        }
        return (NULL);
}
