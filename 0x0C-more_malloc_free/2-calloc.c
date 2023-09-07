#include "main.h"

/**
 * _calloc - allocates memory for array
 * @nmemb: no of elements
 * @size: size of each element
 *
 * Return: Nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
