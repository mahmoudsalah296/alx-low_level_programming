#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
	{
		printf("(nil)");
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
