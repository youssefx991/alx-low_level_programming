#include "main.h"

/**
 * _strncat - concatenats two strings with given number
 * @dest: destination string
 * @src: source string
 * @n: number of chars to be concatenated
 *
 * Return: concatenated string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}

