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

	/* Check if head is NULL or if node-> is greater than value */
	if (!list || cur_node->n > value)
		return (NULL);
	/* Else start checking value against current node */
	/* and next express node						  */
	else
	{
		/* Iterate through express nodes checking value against node->n */
		for (; cur_node; cur_node = cur_node->express)
		{
			next_exp = cur_node->express;
			printf("Value checked at index [%ld] = [%d]\n",
					next_exp->index, next_exp->n);
			/* If value is btwn node->n & express->n */
			if ((cur_node->n <= value && next_exp->n > value) ||
					next_exp->express == NULL)
			{
				next_node = cur_node->next;
				printf("Value found between indexes [%ld] and [%ld]\n",
						cur_node->index, next_exp->index);
				/* Check for value up to epress->index */
				for (; cur_node->index < next_exp->index;
						cur_node = cur_node->next)
				{
					next_node = cur_node->next;
					printf("Value checked at index [%ld] = [%d]\n",
							cur_node->index, cur_node->n);
					if (cur_node->n == value)
						return (cur_node);
					/* Value not in list */
					else if (next_node->index == next_exp->index)
						return (NULL);
				}
			}
		}
		/* If all express nodes are checked and value still not found */
		return (NULL);
	}
}
