#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all args
 * @ac: number of args
 * @av: array of args
 *
 * Return: concatenated args
*/

char *argstostr(int ac, char **av)
{
	char *ptr;
	int size, i, j, k;

	size = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += strlen(av[0]);
	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
