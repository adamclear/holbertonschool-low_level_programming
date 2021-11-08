#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - Prints the elements of a linked list
 * @h: The input head node of a linked list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	unsigned int nodenum = 0;

	while (node)
	{
		if (!node->str)
		{
			printf("[0] (nil)\n");
			nodenum++;
			node = node->next;
		}
		else
		{
			printf("[%d] %s\n", node->len, node->str);
			nodenum++;
			node = node->next;
		}
	}
return (nodenum);
}
