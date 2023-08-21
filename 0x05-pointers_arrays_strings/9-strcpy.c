#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string to another
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int size_src, i;

	size_src = strlen(src);

	for (i = 0; i < size_src; i++)
		dest[i] = src[i];

	dest += '\0';

	return (dest);
}
