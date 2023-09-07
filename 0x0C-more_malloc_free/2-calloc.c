#include "main.h"

/**
 * set - sets all bytes to a value
 * @ptr: pointer
 * @c: char to be setted to
 * @n: number of bytes
 *
 * Return: pointer to the changed pointer
*/
char *set(char *ptr, char c, unsigned int n)
{
	char *tmp = ptr;

	while (n--)
		*ptr++ = c;

	return (tmp);
}

/**
 * _calloc - allocates memory for array
 * @nmemb: no of elements
 * @size: size of each element
 *
 * Return: Nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == NULL)
		return (NULL);

	set(ptr, 0, sizeof(int) * nmemb);

	return (ptr);
}
