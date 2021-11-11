#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: input pointer to head of list
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t nodenum = 0;

	while (node)
	{
		if (node->n)
		{
			printf("%d\n", node->n);
			nodenum++;
			node = node->next;
		}
	}
return (nodenum);
}
