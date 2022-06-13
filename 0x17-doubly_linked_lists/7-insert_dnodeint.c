dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *tmp = *h, *newnode;
        newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
        if (newnode == NULL)
                return (NULL);

        if (idx == 0)
                return (add_dnodeint(h, n));

        while(idx != 0)
        {
                tmp = tmp->next;   
                idx--;
        }

        if (tmp->next == NULL)
                return (add_dnodeint_end(h, n));

        newnode->n = n;
        newnode->prev = tmp->prev;
        newnode->next = tmp;
        if (newnode->prev != NULL)
                newnode->prev->next = newnode;
        else
                (*h) = newnode;
}
