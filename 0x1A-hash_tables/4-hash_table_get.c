#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key we are looking for
 * Return: the value associated with the element,
 *         or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *tmp;

    if (ht == NULL || key == NULL)
        return (NULL);
    index = key_index((const unsigned char *)key, ht->size);
    if (ht->array[index] == NULL)
        return (NULL);

    tmp = ht->array[index];
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
            return tmp->value;

        tmp =tmp->next;
    }
    return (NULL);
}
