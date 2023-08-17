#include "lists.h"
/**
 * 
*/
size_t print_dlistint(const dlistint_t *h)
{
    int num = 0;
    dlistint_t *current = h;

    if (h == NULL)
        return (0);
    while (current)
    {
        printf("%d\n", current->n);
        num++;
        current = current->next;
    }
    return (num);
}
