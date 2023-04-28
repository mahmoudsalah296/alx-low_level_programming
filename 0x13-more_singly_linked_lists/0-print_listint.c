#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * print_listint - prints all elements of int list
 * @h: head of the list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *tmp = (listint_t *)h;

	if (h == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
