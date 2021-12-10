#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: the address of the hash table
 * @key: the key of the element to be added
 * @value: the value to pair with the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int x;
	unsigned long int index;
	hash_node_t *newnode = malloc(sizeof(hash_node_t)), *tmpnode;

	if (!ht || !key || !value || !newnode)
	{
		free(newnode);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	tmpnode = ht->array[index];
	for (x = 0; tmpnode != NULL; x++)
	{
		tmpnode = tmpnode->next;
	}
	tmpnode = newnode;
	return (1);
}
