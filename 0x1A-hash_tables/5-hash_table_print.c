#include "hash_tables.h"
/**
 * hash_table_print - prints the keys and values of a hash table
 * @ht: pointer to the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int comma;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
			ht->array[x] = ht->array[x]->next;
			comma = 1;
		}
	}
	printf("}\n");
return;
}
