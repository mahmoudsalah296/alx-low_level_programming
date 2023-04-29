#include<stdlib.h>
#include<stdio.h>
#include"lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to list head
 * @idx: index where the node will be inserted
 * @n: data to be inserted
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		listint_t *tmp = *head;

		idx--;
		while (idx != 0)
		{
			tmp = tmp->next;
			idx--;
		}
		if (tmp == NULL)
		{
			free(tmp);
			return (NULL);
		}
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	new_node->n = n;
	return (new_node);
}
