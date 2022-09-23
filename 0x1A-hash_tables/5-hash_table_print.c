#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
  hash_node_t curr;
  unsigned long int i;

  printf("{");
  for (i = 0; i < ht->size; i++)
    {
      if (ht->array[i])
	{
	  if (ht->array[i]->next)
	    {
	      curr = ht->array[i];
	      while (curr->next)
		{
		  printf("'%s': '%s', ", curr->key, curr->value);
		  curr = curr->next;
		}
	      printf("'%s': '%s'", curr->key, curr->value);
	    }
	  else
	    {
	      printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
	    }
	}
    }
  printf("}");
}
