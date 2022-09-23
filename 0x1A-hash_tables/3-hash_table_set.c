#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table you want to add or
 * update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
int check;
hash_node_t *node;

if (strlen(key) == 0 || !ht || !value || !key)
return (0);

idx = key_index((unsigned char *)key, ht->size);
check = check_key(ht->array[idx], key);
if (check == 1)
{
update_value(&ht->array[idx], key, value);
return (1);
}
node = add_node(&ht->array[idx], key, value);
if (node == NULL)
return (0);
return (1);
}

/**
 * check_key - checks if a key alreay exists in the table
 * @ht: pointer to the hash node list
 * @key: the key to search for
 * Return: 1 if key exists, 0 otherwise
 */

int check_key(hash_node_t *ht, const char *key)
{
while (ht)
{
if (strcmp(ht->key, key) == 0)
return (1);
ht = ht->next;
}
return (0);
}

/**
 * update_value - updates the value of the key in the table
 * @ht: double pointer to the hash node list
 * @key: key to search for
 * @value: value to update
 */

void update_value(hash_node_t **ht, const char *key, const char *value)
{
hash_node_t *curr = *ht;

while (curr)
{
if (strcmp(curr->key, key) == 0)
break;
curr = curr->next;
}
free(curr->value);
curr->value = strdup(value);
}

/**
 * add_node - add a new node at the beginnig of the list
 * @ht: double pointer to the hash node list
 * @key: key to add
 * @value: value to add
 * Return: pointer to new node or NULL if it fails
 */

hash_node_t *add_node(hash_node_t **ht, const char *key, const char *value)
{
hash_node_t *new_node;

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (NULL);
new_node->key = strdup(key);
new_node->value = strdup(value);

if (*ht == NULL)
{
(*ht) = new_node;
new_node->next = NULL;
}
else
{
new_node->next = (*ht);
(*ht) = new_node;
}
return (*ht);
}
