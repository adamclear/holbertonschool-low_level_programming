#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table of a provided size
 * @size: the size of the table to be created
 * Return: pointer to the new table if successful, NULL if not
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtable && hashtable->array)
	{
		for (x = 0; x < size; x++)
			hashtable->array[x] = NULL;
		return (hashtable);
	}
	return (NULL);
}
