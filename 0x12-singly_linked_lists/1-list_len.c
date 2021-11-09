#include "lists.h"
/**
 * list_len - Counts the elements of a linked list
 * @h: input head node of list
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t elenum = 0;

	while (node)
	{
		elenum++;
		node = node->next;
	}
return (elenum);
}
