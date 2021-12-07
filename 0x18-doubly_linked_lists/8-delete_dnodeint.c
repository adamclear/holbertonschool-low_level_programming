#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at the index
 * @head: head of the list
 * @index: index node to be deleted
 * Return: 1 on success, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempnode = *head;
	dlistint_t *indexnode;
	unsigned int x = 0;

	if (tempnode == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempnode);
		return (1);
	}
	while (tempnode && x < (index - 1))
	{
		if (tempnode->next == NULL)
			return (-1);
		tempnode = tempnode->next;
		x++;
	}
	indexnode = tempnode->next;
	tempnode->next = indexnode->next;
	tempnode->prev = indexnode->prev;
	free(indexnode);
	return (1);
}
