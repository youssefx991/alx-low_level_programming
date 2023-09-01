#include "main.h"

/**
 * _strstr - check the occurance of substring
 * @haystack: destination string
 * @needle: source string
 *
 * Return: pointer to first occur of substring.
*/

char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
