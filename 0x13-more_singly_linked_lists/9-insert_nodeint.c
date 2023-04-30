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
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		idx--;
		while (idx != 0)
		{
			idx--;
			tmp = tmp->next;
			if (tmp == NULL)
			{
				free(newNode);
				return (NULL);
			}
		}
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	newNode->n = n;
	return (newNode);
}
