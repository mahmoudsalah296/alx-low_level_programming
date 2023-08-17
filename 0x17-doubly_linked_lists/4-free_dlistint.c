#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
		return;
	if (head->next == NULL)
		free(head);
	while (current->next)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
	head = NULL;
}
