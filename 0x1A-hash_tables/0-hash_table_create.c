#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table of a provided size
 * @size: the size of the table to be created
 * Return: pointer to the new table if successful, NULL if not
 */
hash_table_t *has_table_create(unsigned long int size)
{
	hash_table_t hashtable = malloc(sizeof(hash_node_t) * size);

	if (hashtable)
		return (hashtable);

	return (NULL);
}
