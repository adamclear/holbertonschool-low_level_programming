#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: input pointer to head of list
 * @n: input integer to populate the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

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
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
