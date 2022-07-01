#include "search_algos.h"
/**
 * linear_skip - Searches a linked list for a value using a skip link algorithm
 * @list: Pointer to the list to be searched.
 * @value: The value to be found.
 * Return: Pointer to the node containing the value, or NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *next_exp, *cur_node = list, *next_node;

	if (!list)
		return (NULL);
	for (; cur_node; cur_node = cur_node->express)
	{
		next_exp = cur_node->express;
		printf("Value checked at index [%ld] = [%d]\n",
				next_exp->index, next_exp->n);
		if (next_exp->n >= value ||
				next_exp->express == NULL)
		{
			if (next_exp->express == NULL && next_exp->n <= value)
			{
				cur_node = next_exp;
				for (; next_exp->next;)
					next_exp = next_exp->next;
			}
			next_node = cur_node->next;
			printf("Value found between indexes [%ld] and [%ld]\n",
					cur_node->index, next_exp->index);
			for (; next_node->index <= next_exp->index;
					cur_node = cur_node->next)
			{
				next_node = cur_node->next;
				printf("Value checked at index [%ld] = [%d]\n",
						cur_node->index, cur_node->n);
				if (cur_node->n == value)
					return (cur_node);
				else if (cur_node->index == next_exp->index)
					return (NULL);
			}
		}
	}
	return (NULL);
}
