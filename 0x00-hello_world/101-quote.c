#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A C program to display a line and return 1
 *
 * Return: Always 1 (Failure)
*/

int main(void)
{
	char line[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (int i = 0; line[i] != '\0'; i++)
	{
		putchar(line[i]);
	}
	putchar('\n');
	return (1);

}
