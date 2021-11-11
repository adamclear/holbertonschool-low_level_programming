#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: input pointer to head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nextnode;

	while (head)
	{
		nextnode = head->next;
		free(head);
		head = nextnode;
	}
return;
}
