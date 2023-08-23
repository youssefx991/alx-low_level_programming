#include "main.h"

/**
 * string_toupper - lowercase all letters
 * @c: string to be lowercased
 *
 * Return: lowercased string.
*/

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
	}

	return (c);
}
