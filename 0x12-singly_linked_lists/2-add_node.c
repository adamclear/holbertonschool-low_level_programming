#include "lists.h"
/**
 * add_node - Adds a node to the linked list
 * @head: input pointer for the head node of the list
 * @str: input string for the new node
 * Return: The linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

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
	newnode->next = *head;
	*head = newnode;
return (newnode);
}
