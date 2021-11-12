#include "lists.h"
/**
 * get_nodeint_at_index - finds the nth node and returns it
 * @head: input pointer for head of node
 * @index: input variable for node requested
 * Return: the node at the nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempnode = head;
	unsigned int x = 0;

	if (!head)
	{
		return (NULL);
	}
	while (x <= index && tempnode != NULL)
	{
		if (x == index)
		{
			return (tempnode);
		}
		x++;
		tempnode = tempnode->next;
	}
	return (NULL);
}
