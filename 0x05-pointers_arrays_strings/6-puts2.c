#include "main.h"
#include <string.h>

/**
 * puts2 - prints even positions in string
 * @str: given string
 *
 * Return: void.
*/

void puts2(char *str)
{
	int i, size;

	size = strlen(str);

	for (i = 0; i < size; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');

}

