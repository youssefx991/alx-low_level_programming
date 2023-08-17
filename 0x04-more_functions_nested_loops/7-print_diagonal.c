#include "main.h"

/**
 * print_diagonal - print diagonal depending on input
 * @n: length of diagonal
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= n; i++)
		{
			if (i == j)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
