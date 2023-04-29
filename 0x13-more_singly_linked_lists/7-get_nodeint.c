#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * get_nodeint_at_index - get the nth node of the list
 * @head: pointer to head of the list
 * @index: index of the node to be returned
 * Return: the node at given index or NULL if it doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	i = 0;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	return (tmp);
}
