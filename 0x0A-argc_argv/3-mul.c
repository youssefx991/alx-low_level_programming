#include <stdio.h>
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

	if (argc >= 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}

	return (0);

}
