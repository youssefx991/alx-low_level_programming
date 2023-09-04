#include "main.h"

/**
 * free_grid - frees the space of 2d array
 * @grid: 2d array
 * @height: height of array
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0 || grid == NULL || *grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
	}

	while (i--)
		free(grid[i]);
	free(grid);
}
