#include "lists.h"
/**
 * free_list - Frees a linked list from memory
 * @head: Input list to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head->str);
		free(head);
		head = nextnode;
	}
return;
}
