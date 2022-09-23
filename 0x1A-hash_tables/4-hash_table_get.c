#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: pointer to hash table to look into
 * @key: key to search for
 * Return: the value associated with the element, or NULL
 * if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *curr;

if (!ht || !key)
return (NULL);

idx = key_index((unsigned char *)key, ht->size);
curr = ht->array[idx];

while (curr)
{
if (strcmp(curr->key, key) == 0)
return (curr->value);
curr = curr->next;
}
return (NULL);
}
