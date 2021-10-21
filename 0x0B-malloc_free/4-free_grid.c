#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid- frees up the memory allocated by a grid
 * @grid: pointer to the array that we are freeing
 * @height: the number of rows in the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	(void)height;
	free(grid);
return;
}
