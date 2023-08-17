#include "main.h"

/**
 * print_triangle - print triangle depending on input
 * @size: size of diagonal
 *
 * Return: void
*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j <= size - 1; j++)
		{
			_putchar(' ');
		}

		for (k = 1; k <= i; k++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
