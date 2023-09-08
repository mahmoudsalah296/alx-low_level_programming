#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int elements_number = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (elements_number > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			elements_number += 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
