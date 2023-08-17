#include "lists.h"

/**
 * add_dnodeint_end - add node at end of a list
 * @head: head of the list
 * @n: data to be added
 * Return: add_dnodeint_end
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		dlistint_t *curr = *head;

		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = node;
		node->prev = curr;
	}
	return (node);
}
