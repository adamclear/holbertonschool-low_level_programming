#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
	return;
}
