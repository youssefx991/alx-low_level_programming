#include "main.h"

/**
 * _strcat - Cocatenates two string
 * @dest: first string
 * @src: second string
 *
 * Return: Concatenated string.
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
		dest[i++] = src[j];

	return (dest);
}

