#include "main.h"

/**
 * alloc_grid - allocatesspace for 2d array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the 2d array
*/

int **alloc_grid(int width, int height)
{
	int **ptr2, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr2 = malloc(sizeof(int *) * height);

	if (ptr2 == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr2[i] = malloc(sizeof(int) * 1);
		for (j = 0; j < width; j++)
		{
			ptr2[i][j] = 0;
		}
	}

	return (ptr2);
}
