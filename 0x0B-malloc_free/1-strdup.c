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

	n = strlen(str) + 1;
	ptr = (char *)malloc(sizeof(char) * n);

	if (str == NULL || ptr == NULL)
		return (NULL);


	for (i = 0; i < n; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
