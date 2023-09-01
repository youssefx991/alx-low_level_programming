#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: = integer representing diff between first and second string.
*/

int _strcmp(char *s1, char *s2)
{
	int i, res;

	res = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] !=  s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	return (res);
}

