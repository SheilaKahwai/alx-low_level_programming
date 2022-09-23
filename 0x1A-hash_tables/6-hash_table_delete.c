#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *curr, *temp;
unsigned long int i;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
{
curr = ht->array[i];
while (curr)
{
temp = curr->next;
free(curr->key);
free(curr->value);
free(curr);
curr = temp;
}
}
free(ht->array);
free(ht);
}
