#include "main.h"

/**
 * _memset - fills string with given byte
 * @s: destination string
 * @b: char to be fillew with
 * @n: number of characters in string to be changed
 *
 * Return: memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
