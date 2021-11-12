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
	listint_t *prevnode = *head;
	listint_t *curnode = prevnode->next;
	listint_t *newnode = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (*head == NULL || !newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = prevnode;
		*head = newnode;
		return (newnode);
	}
	while (x < idx)
	{
		if (!prevnode)
		{
			return (NULL);
		}
		if (x == idx - 1)
		{
			newnode->next = curnode;
			curnode = curnode->next;
			prevnode->next = newnode;
			return (newnode);
		}
		prevnode = prevnode->next;
		curnode = curnode->next;
		x++;
	}
return (NULL);
}
