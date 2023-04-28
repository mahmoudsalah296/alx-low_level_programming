#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * add_nodeint_end - adds node to the end of a list
 * @head: head of the list
 * @n: element to be added
 * Return: address of he new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
		newNode->next = NULL;
	}
	newNode->n = n;
	return (newNode);
}
