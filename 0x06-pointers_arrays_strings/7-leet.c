#include "main.h"

/**
 * leet - converts string to 1337
 * @c: string to be converted
 *
 * Return: converted sring.
*/

char *leet(char *c)
{
	int i, j;
	char s[] = "OL2EA56T";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if ((c[i] == s[j]) || (c[i] == s[j] + 32))
				c[i] = j + 48;
		}
	}

	return (c);
}
