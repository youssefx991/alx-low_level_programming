#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverses given string
 * @s: string to be reversed
 *
 * Return: void.
*/

void rev_string(char *s)
{
	int size, i;
	char *tmp;

	size = strlen(s);
	tmp = malloc(sizeof(char) * size);

	for (i = size - 1; i >= 0; i--)
	{
		tmp[size - i - 1] = s[i];
	}

	for (i = 0; i < size; i++)
		s[i] = tmp[i];
}

