#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - Counts the elements of a linked list
 * @h: input head node of list
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	unsigned int elenum = 0;

	if (!node)
	{
		return (elenum);
	}
	while (node)
	{
		elenum++;
		node = node->next;
	}
return (elenum);
}
