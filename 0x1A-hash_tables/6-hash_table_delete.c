#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table from memory
 * @ht: pointer to the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *current, *temp;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
	{
		current = ht->array[x];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
return;
}
