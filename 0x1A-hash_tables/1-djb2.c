#include "hash_tables.h"
/**
 * hash_djb2 - hash key algorithm djb2
 * @str: the string to generate the key
 * Return: The key value of the hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		{
			hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
		}
	return (hash);
}
