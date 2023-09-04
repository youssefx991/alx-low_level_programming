#include "main.h"
#include <string.h>

/**
 * _strdup - copies string to space
 * @str: source string
 *
 * Return: pointer to new string location
*/

char *_strdup(char *str)
{
	int i, n;
	char *ptr;

	if (str == NULL)
		return (NULL);

	n = strlen(str);
	ptr = (char *)malloc(sizeof(char) * n);

	for (i = 0; i < n; i++)
		ptr[i] = str[i];

	return (ptr);
}
