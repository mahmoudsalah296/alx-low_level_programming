#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at given index in a list
 * @h: head of the list
 * @idx: index where the node will be inserted
 * @n: data of the node
 * Return: pointer to inserted node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *new = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (curr)
	{
		if (i == idx - 1)
		{
			if (curr->next == NULL)
				return (add_dnodeint_end(h, n));

			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);

			new->n = n;
			new->next = curr->next;
			new->prev = curr;
			curr->next->prev = new;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
