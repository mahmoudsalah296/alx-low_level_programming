#include<stdlib.h>
#include<stdio.h>
#include"lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of the list
 * @idx: index where the node will be inserted
 * @n: the data that will be inserted
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tmp;
	unsigned int i = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		if (idx == 0)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
		}
		else
		{
			tmp = *head;
			while (i < idx - 1)
			{
				tmp = tmp->next;
				if (tmp == NULL)
					return (NULL);
				idx--;
			}
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
