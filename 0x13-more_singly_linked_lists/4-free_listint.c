#include<stdlib.h>
#include<stdio.h>
#include"lists.h"

/**
 * free_listint - frees a list
 * @head: head of the list to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
