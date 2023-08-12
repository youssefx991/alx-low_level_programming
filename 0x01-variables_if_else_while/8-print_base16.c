#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A c program to Print hexadecimal characters
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	char c;

	for (i = 0; i <= 9; i++)
		putchar(i + 48);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
