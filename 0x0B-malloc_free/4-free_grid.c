#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory of 2 dimensional grid
 * @grid: pointer to the 2D grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
