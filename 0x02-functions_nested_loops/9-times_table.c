#include "main.h"

/**
 * times_table - Displays all 9 numbers table
 *
 * Return: Always 0.
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			if ((i * j) <= 9)
				_putchar(' ');
			else
				_putchar(((i * j) / 10) + '0');

			_putchar(((i * j) % 10) + '0');
		}
		_putchar('\n');
	}
}
