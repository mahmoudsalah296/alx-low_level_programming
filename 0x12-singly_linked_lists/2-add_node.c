#include<stdio.h>
#include "lists.h"
#include<stdlib.h>
#include<string.h>

/**
 * add_node - add node to beginning of a list
 * @head: head of the list
 * @str: string to be added
 * Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	if (head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	return (newNode);
}
