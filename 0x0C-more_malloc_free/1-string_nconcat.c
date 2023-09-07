#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars to be concatenated
 *
 * Return: pointer to netring
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int n1, size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n1 = strlen(s1);
	size = n1 + n + 1;
	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
