#include "main.h"

/**
 * _strchr - locates char in string
 * @s: string to be checked
 * @c: char to be searched for
 *
 * Return: pointer to first occur of c.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
