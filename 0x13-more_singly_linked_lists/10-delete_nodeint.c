#include<stdlib.h>
#include<stdio.h>
#include"lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index in linked list
 * @head: pointer to list head
 * @index: index where node will be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *tmp = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			prev = tmp;
			tmp = tmp->next;
			index--;
			if (tmp == NULL)
				return (-1);
		}
		prev->next = tmp->next;
		free(tmp);
		tmp = NULL;
		return (1);
	}
}
