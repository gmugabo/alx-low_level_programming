#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a two dimensional array of integers
 * @grid: point to allocated array
 * @height: height of array to be freed
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
