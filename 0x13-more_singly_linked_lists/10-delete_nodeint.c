#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: input pointer to head node
 * @index: input variable for index of node to delete
 * Return: 1 if successful, -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempnode = *head;
	listint_t *curnode;
	unsigned int x = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempnode);
		return (1);
	}
	while (tempnode && x < (index - 1))
	{
		if (tempnode->next == NULL)
		{
			return (-1);
		}
		tempnode = tempnode->next;
	}
	curnode = tempnode->next;
	tempnode->next = curnode->next;
	free(curnode);
return (1);
}
