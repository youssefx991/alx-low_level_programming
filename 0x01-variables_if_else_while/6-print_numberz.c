#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print numbers form 0 to 9 followed by newline
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + 48);

	putchar('\n');

	return (0);
}
