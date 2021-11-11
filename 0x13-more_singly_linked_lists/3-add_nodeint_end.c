#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: input pointer to head of list
 * @n: input variable to populate new node
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *end = *head;

	if (!head || !n)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = newnode;
	return (newnode);
}
