#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
	*head = NULL;
}
