#include "main.h"

/**
 * print_times_table - Prints table of specific number.
 * @n: number to be given
 *
 * Return: Always 0.
*/

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				if ((i * j) <= 9)
					_putchar(' ');
				if ((i * j) <= 99)
					_putchar(' ');
				if ((i * j) >= 100)
				{
					_putchar(((i * j) / 100) + '0');
					_putchar(((i * j) / 10) % 10 + '0');
				} else if ((i * j) >= 10 && (i * j) <= 99)
					_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
