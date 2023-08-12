#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print all single digits
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	putchar('\n');

	return (0);
}
