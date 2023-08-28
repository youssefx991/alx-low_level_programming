#include "main.h"

/**
 * _strspn - returns length of initial segment
 * @s: given string to search in it
 * @accept: string to search for its chars
 *
 * Return: length of initial segment.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j, found;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (!found)
			break;
	}

	return (count);
}
