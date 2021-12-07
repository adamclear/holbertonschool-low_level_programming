#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a doubly linked list
 * @h: the head of the list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t nodenum = 0;

	while (node)
		{
			nodenum++;
			node = node->next;
		}
	return (nodenum);
}
