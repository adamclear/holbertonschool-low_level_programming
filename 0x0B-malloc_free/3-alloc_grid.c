#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid- creates a grid based on input variables and populates with 0
 * @width: input variable int
 * @height: input variable int
 * Return: grid on success, NULL if not
 */
int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(height * sizeof(int *));
	int x;
	int y;

	if (grid == NULL || width < 1 || height < 1)
	{
		free(grid);
		return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		grid[y] = (int *)malloc(width * sizeof(int));
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	for (y = 0; y < height; y++)
	{
		if (grid[y] == NULL)
		{
			free(grid[y]);
		}
	}
return (grid);
}
