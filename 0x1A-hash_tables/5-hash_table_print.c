#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		tmp = ht->array[i];
		while (tmp)
		{
			printf("\'%s\':\'%s\'", ht->array[i]->key, ht->array[i]->value);
			if (tmp->next)
				printf(", ");
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
