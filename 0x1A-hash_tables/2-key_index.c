#include "hash_tables.h"
/**
 * key_index - finds the index of a particular key
 * @key: the key
 * @size: the size of the table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int address = hash_djb2(key);
	unsigned long int index = address % size;

	return (index);
}
