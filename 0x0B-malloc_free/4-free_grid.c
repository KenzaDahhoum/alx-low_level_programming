#include "main.h"

/**
 * free_grid - Frees a grid
 * @grid: The grid to be freed
 * @height: The height of the grid
 * Return: void, just free the mem
 */

void free_grid(int **grid, int height)
{
	int len;

	for (len = 0; i < height; len++)
	{
		free(grid[len]);
	}

	free(grid);
}
