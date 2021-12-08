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
	dlistint_t *prevnode, *nextnode;
	unsigned int x;

	if (tempnode == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempnode);
		return (1);
	}
	for (x = 0; tempnode != NULL; x++)
	{
		tempnode = tempnode->next;
		if (x == (index - 1))
		{
			if (tempnode->next == NULL)
			{
				prevnode = tempnode->prev;
				prevnode->next = NULL;
			}
			else
			{
				prevnode = tempnode->prev;
				nextnode = tempnode->next;
				prevnode->next = nextnode;
				nextnode->prev = prevnode;
			}
			free(tempnode);
			return (1);
		}
		if (tempnode->next == NULL)
			return (-1);
	}
	return (-1);
}
