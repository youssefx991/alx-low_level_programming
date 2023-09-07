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
	unsigned int i, n;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = size * nmemb;
	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = 0;

	return (ptr);
}
