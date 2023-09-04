#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings in a new memory location
 * @s1: first string
 * @s2: stecond string
 *
 * Return: pointer to new string location
*/

char *str_concat(char *s1, char *s2)
{
	int n1, n2, i, size, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n1 = strlen(s1);
	n2 = strlen(s2);
	size = n1 + n2 + 1;
	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n2; j++)
		ptr[j + i] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
