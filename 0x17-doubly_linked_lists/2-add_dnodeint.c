#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head of the list
 * @n: data to be added
 * Return: pointer to added node or null if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
	return (node);
}
