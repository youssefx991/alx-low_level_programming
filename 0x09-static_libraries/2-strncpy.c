#include "main.h"

/**
 * _strncpy - copies string to another with given number
 * @dest: destination
 * @src: source:
 * @n: number to chars
 *
 * Return: copied string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

