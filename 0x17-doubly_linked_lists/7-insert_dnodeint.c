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
	dlistint_t *current = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		else
			return (NULL);
	}
	while (current)
	{
		if (idx == 0)
		{
			if (current->next == NULL)
				return (add_dnodeint_end(h, n));
			node->next = current;
			node->prev = current->prev;
			current->prev->next = node;
			current->prev = node;
			return (node);
		}
		current = current->next;
		idx--;
	}
	return (NULL);
}
