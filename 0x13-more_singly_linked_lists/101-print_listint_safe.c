#include<stdlib.h>
#include<stdio.h>
#include"lists.h"

/**
 * print_listint_safe - prints a linked list with a loop
 * @head: head of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	listint_t *fast, *slow;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	fast = slow = (listint_t *)head;
	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;
		if (fast == slow)
			break;
	}
	if (fast == slow)
	{
		slow = (listint_t *)head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)fast, fast->n);
			slow = slow->next;
			fast = fast->next;
			count++;
		}
		printf("-> [%p] %d\n", (void *)slow, slow->n);
	}
	else
	{
		while (slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
		}
	}
	return (count);
}
