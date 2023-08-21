#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of string
 * @str: given string
 *
 * Return: void.
*/

void puts_half(char *str)
{
	int i, size, halfway;

	size = strlen(str);

	if (size % 2 == 0)
		halfway = size / 2;
	else
		halfway = (size / 2) + 1;

	for (i = halfway; i < size; i++)
		putchar(str[i]);

	putchar('\n');
}
