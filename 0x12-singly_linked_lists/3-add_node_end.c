#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lists.h"
/**
 * add_node_end - add node at the end of list
 * @head: head of the list
 * @str: string to be added
 * Return: address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		list_t *tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
		newNode->next = NULL;
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	return (newNode);
}
