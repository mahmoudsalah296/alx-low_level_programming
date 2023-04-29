#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of the list
 * Return: data in head node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
