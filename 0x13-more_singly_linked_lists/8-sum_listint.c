#include "lists.h"
/**
 * sum_listint - sums the ints in all nodes of a linked list
 * @head: input pointer to head node
 * Return: the sum of all ints in the nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *tempnode = head;
	int sum = 0;

	if (!tempnode)
	{
		return (0);
	}
	while (tempnode)
	{
		sum += tempnode->n;
		tempnode = tempnode->next;
	}
return (sum);
}
