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
	unsigned long int index;
	hash_node_t *newnode, *tmpnode;

	if (!ht || !key || !value)
		return (0);
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
	{
		free(newnode);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	tmpnode = ht->array[index];
	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	else
	{
		tmpnode = ht->array[index];
		for (; tmpnode != NULL; tmpnode = tmpnode->next)
		{
			if ((strcmp(key, tmpnode->key)) == 0)
			{
				free(tmpnode->value);
				tmpnode->value = newnode->value;
				free(newnode->key);
				free(newnode);
				return (1);
			}
		}
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);
}
