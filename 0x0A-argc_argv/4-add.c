#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: array of arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (0);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}

	printf("%d\n", sum);

	return (0);
}
