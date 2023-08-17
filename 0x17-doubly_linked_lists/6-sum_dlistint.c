#include "lists.h"

/**
 * sum_dlistint - sum all data of linked list
 * @head: head of the list
 * Return: the sum, or 0 if the sum is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return sum;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
