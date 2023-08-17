#include "lists.h"
/**
 * print_dlistint - print a doubly linked list
 * @h: head of the list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;
	dlistint_t *current = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (current)
	{
		printf("%d\n", current->n);
		num++;
		current = current->next;
	}
	return (num);
}
