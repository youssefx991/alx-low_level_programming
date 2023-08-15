#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times above each other
 *
 * Return: on success 0
*/

void print_alphabet_x10(void)
{
	int i;

	char a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);

		_putchar('\n');
	}
}
