#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list
 * @head: head of the list
 * Return:  The address of the node where the loop starts,
 * or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node = has_a_loop(head);

	if (head == NULL)
		return (NULL);
	if (node)
	{
		listint_t *current = head;
		while (current != node)
		{
			current = current->next;
			node = node->next;
		}
		return (node);
	}
	return (NULL);
}
