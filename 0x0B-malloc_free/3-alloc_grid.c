#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a two dimensional array of ints
 * returns a pointer
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: return pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			while (x--)
				free(grid[x]);
		}
						free(grid);
						return (NULL);
		}
	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	grid[x][y] = 0;
	}
	return (grid);
}

