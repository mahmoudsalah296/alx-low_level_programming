#include<stdio.h>
#include"lists.h"
/**
 * list_len - calculate number of elements in a list
 * @h: head of list
 * Return: elements count
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;
	list_t *tmp = (list_t *)h;

	if (tmp == NULL)
	{
		return (0);
	}
	else
	{
		while (tmp != NULL)
		{
			len++;
			tmp = tmp->next;
		}
	}
	return (len);
}
