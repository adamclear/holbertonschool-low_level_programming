#include "lists.h"
/**
 * free_listint2 - frees a linked list where the head is set to NULL
 * @head: input pointer to head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tempnode;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		tempnode = (*head)->next;
		free(*head);
		*head = tempnode;
	}
	free(tempnode);
	*head = NULL;
return;
}
