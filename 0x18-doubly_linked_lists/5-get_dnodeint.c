#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: head of the list
 * @index: index to be returned
 * Return: address of the indexed node if successful, NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int x = 0;

	if (!head)
		return (NULL);
	while (x <= index && current != NULL)
	{
		if (x == index)
			return (current);
		x++;
		current = current->next;
	}
	return (NULL);
}
