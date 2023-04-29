#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * sum_listint - sums data of the list
 * @head: pointer to the head of the list
 * Return: the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
