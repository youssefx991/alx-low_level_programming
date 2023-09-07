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
	char *tmp;
	void *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == NULL)
		return (NULL);

	n = sizeof(int) * nmemb;
	tmp = ptr;

	while (n--)
		*tmp++ = 0;

	return (ptr);
}
