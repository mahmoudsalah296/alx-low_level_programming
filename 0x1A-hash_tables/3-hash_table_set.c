#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (key == NULL || ht == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup((char *)key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup((char *)value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		node->next = NULL;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
