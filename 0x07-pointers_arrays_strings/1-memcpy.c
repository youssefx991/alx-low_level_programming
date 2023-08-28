#include "main.h"

/**
 * _memcpy - copies memory area from string to another
 * @dest: destination memory area
 * @src: source memoery area
 * @n: number of bytes
 *
 * Return: pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
