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
	if (idx == 0)
	{
		if (*h == NULL)
		{
			*h = node;
		}
		else
		{
			node->next = *h;
			(*h)->prev = node;
			*h = node;
		}
		return (node);
	}
	while (current)
	{
		if (idx == 0)
		{
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
