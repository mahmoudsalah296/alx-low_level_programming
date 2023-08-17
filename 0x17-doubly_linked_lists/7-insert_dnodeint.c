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
	dlistint_t *curr = *h, *node = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (curr)
	{
		if (i == idx - 1)
		{
			if (curr->next == NULL)
				return (add_dnodeint_end(h, n));

			node = malloc(sizeof(dlistint_t));
			if (!node)
				return (NULL);

			node->n = n;
			node->next = curr->next;
			node->prev = curr;
			curr->next->prev = node;
			curr->next = node;
			return (node);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
