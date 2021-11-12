#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at the index number
 * @head: input pointer to head node
 * @idx: input variable for index
 * @n: input variable for new node data
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tempnode = *head;
	listint_t *newnode = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = tempnode;
		*head = newnode;
		return (newnode);
	}
	while (x < idx)
	{
		if (!tempnode)
		{
			return (NULL);
		}
		if (x == idx - 1)
		{
			newnode->next = tempnode->next;
			tempnode->next = newnode;
			return (newnode);
		}
		tempnode = tempnode->next;
		x++;
	}
return (NULL);
}
