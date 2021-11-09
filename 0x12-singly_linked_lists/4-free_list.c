#include "lists.h"
/**
 * free_list - Frees a node from memory
 * @head: Input list node to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head ->str);
		free(head);
		head = nextnode;
	}
return;
}
