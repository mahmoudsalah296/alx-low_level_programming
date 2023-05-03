#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * has_a_loop - checks if the list has a loop
 * @head: head of the list
 * Return: the node where there is a loop or NULL if no loop
*/
listint_t *has_a_loop(listint_t *head)
{
	listint_t *fast, *slow;

	fast = slow = head;
	while (fast && slow && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
			return (fast);
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a list even it has a loop
 * @h: pointer to head of the list
 * Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *node = has_a_loop(*h);
	size_t size = 0;

	if (*h == NULL || h == NULL)
		return (0);
	if (node)
	{
		listint_t *current = *h;

		while (node->next != current->next)
		{
			node = node->next;
			current = current->next;
			free(*h);
			*h = current;
			size++;
		}
		node->next = NULL;
		while (current)
		{
			current = current->next;
			free(*h);
			*h = current;
			size++;
		}
		*h = NULL;
		return (size);
	}
	else
	{
		node = *h;
		while (*h)
		{
			*h = (*h)->next;
			free(node);
			node = *h;
			size++;
		}
		return (size);
	}
}
