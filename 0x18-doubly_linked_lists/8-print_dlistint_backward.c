#include "lists.h"
/**
 * print_dlistint_backward - print elements of a doubly linked list in reverse
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodenum = 0;

	while (current)
	{
		nodenum++;
		if (current->next == NULL)
			break;
		current = current->next;
	}
	while (current)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
	return (nodenum);
}
