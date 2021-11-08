#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints the elements of a linked list
 * @h: The input head node of a linked list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *h = (list_t *)h;
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
			h = h->next;
		}
	}
return (n);
}
