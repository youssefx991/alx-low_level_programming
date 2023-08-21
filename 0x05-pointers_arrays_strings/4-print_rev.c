#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reversed order
 * @s: string to be printed
 *
 * Return: void.
*/

void print_rev(char *s)
{
	int n, i;

	n = strlen(s);

	for (i = n; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

