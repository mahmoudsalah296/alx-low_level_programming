#include "lists.h"

/**
 * dlistint_len - get number of elements in doubly linked list
 * @h: head of the list
 * Return: the size
*/
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;
	dlistint_t *current = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (current)
	{
		num++;
		current = current->next;
	}
	return (num);
}
