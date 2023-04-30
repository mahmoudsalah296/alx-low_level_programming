#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 *
 * @head: Pointer to pointer to the head of a list
 * @idx: Index of the list where the new node should be added
 * @n: Data to be added to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	for (i = 0; tmp != NULL && i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL || i != idx - 1)
	{
	free(new_node);
	return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
