#include "lists.h"
/**
 * sum_listint - sums the ints in all nodes of a linked list
 * @head: input pointer to head node
 * Return: the sum of all ints in the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
