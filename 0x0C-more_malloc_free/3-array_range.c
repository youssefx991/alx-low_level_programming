#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first array number
 * @max: last array number
 *
 * Return: pointer to array
*/

int *array_range(int min, int max)
{
	unsigned int i, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
