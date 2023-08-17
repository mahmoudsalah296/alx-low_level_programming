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
		add_dnodeint(h, n);
	}
	while (current)
	{
		if (idx == 0)
		{
			if (current->next == NULL)
				add_dnodeint_end(h, n);
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
