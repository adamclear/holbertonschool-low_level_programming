#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list and returns the data
 * @head: input pointer to head node of list
 * Return: the data within the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tempnode;
	int tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tempnode = *head;
	tmp = (*head)->n;
	*head = (*head)->next;
	free(tempnode);
	return (tmp);
}
