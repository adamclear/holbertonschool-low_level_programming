#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table
 * @key: the key to retrieve the value
 * Return: value of the key if successful, NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmpnode;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmpnode = ht->array[index];
	for (; tmpnode != NULL; tmpnode = tmpnode->next)
	{
		if ((strcmp(key, tmpnode->key)) == 0)
			return (tmpnode->value);
	}
	return (NULL);
}
