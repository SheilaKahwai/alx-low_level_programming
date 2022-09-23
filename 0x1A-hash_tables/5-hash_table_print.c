#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *curr;
unsigned long int i;
int flag;

if (!ht)
return;

flag = 0;
printf("{");
for (i = 0; i < ht->size; i++)
{
curr = ht->array[i];
while (curr)
{
if (flag == 0)
flag = 1;
else
printf(", ");
printf("'%s': '%s'", curr->key, curr->value);
curr = curr->next;
}
}
printf("}\n");
}
