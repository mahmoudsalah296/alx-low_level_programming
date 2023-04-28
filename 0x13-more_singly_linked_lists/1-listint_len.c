#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * listint_len - count number of elements in linked list
 * @h: head of the list
 * Return: count
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *iterator = (listint_t *)h;

	if (h == NULL)
		return (0);
	while (iterator != NULL)
	{
		count++;
		iterator = iterator->next;
	}
	return (count);
}
