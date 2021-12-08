#include "lists.h"
/**
 * sum_dlistint - sums the ints in a doubly linked list
 * @head: head of the list
 * Return: the sum of the ints, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
