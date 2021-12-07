#include "lists.h"
/**
 * print_dlistint - prints the elements of a dlistint_t list
 * @h: the head of the list to be printed
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t nodenum = 0;

	while (node)
	{
		nodenum++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (nodenum);
}
