#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: input pointer to head of list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t nodenum = 0;

	while (node)
	{
		nodenum++;
		node = node->next;
	}
	return (nodenum);
}
