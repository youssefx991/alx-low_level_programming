#include "main.h"

/**
 * isSeparator - capitalize given string
 * @c: string to be capitalized
 *
 * Return: 0 fale 1 true.
*/

int isSeparator(char c)
{
	int i;
	char s[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == s[i])
			return (1);
	return (0);
}


/**
 * cap_string - capitalize given string
 * @c: string to be capitalized
 *
 * Return: capitalized string.
*/

char *cap_string(char *c)
{
	int i, sep;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (isSeparator(c[i]) == 1)
			sep = 1;

		else if ((c[i] >= 'a' && c[i] <= 'z') && sep)
		{
			c[i] -= 32;
			sep = 0;
		}
		else
			sep = 0;
	}

	return (c);
}
