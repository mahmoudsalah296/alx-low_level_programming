#include<stdio.h>
#include"lists.h"
/**
 * print_list - prints all elements of a list
 * @h: list to be printed
 * Return: number of elements printed
*/
size_t print_list(const list_t *h)
{
	list_t *tmp;
	size_t count = 0;

	tmp = (list_t *)h;
	if (h == NULL)
		return (1);

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%lu] %s\n", tmp->len, tmp->str);
		}
		count++;
		tmp = tmp->next;
	}
	return (count);
}
