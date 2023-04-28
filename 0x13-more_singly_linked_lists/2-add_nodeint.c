#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * add_nodeint - add node to beginning of a list
 * @head: head of the list
 * @n: element to be added
 * Return: address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	newNode->n = n;
	return (newNode);
}
