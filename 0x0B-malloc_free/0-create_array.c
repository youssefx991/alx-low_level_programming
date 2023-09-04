#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array with given size and char
 * @size: size of array
 * @c: char of array
 *
 * Return: array after creation
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
