#include "lists.h"

/**
 * get_dnodeint_at_index - get node at given index
 * @head: head of the list
 * @index: index where the node will be got
 * Return: the node, or null if it is not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (current)
	{
		if (index == 0)
			return (current);
		current = current->next;
		index--;
	}
	return (NULL);
	
}
