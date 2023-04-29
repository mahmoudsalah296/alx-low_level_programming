#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL) /* check if head is NULL */
	{
		printf("(nil)");
		return;
	}

	if (*head == NULL) /* check if list is empty */
	{
		return;
	}

	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}

	*head = NULL; /* set caller's pointer to NULL */
}
