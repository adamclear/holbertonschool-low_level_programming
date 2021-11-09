#include "lists.h"
/**
 * add_node_end - Adds a node to the end of a liked list
 * @head: Input pointer to head of linked list
 * @str: Input pointer to string to add to node
 * Return: The new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *end = *head;

	if (!head || !str)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
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
