#include "main.h"

/**
 * print_last_digit - Returns last digit in a number
 * @n: number passed in
 *
 * Return: Always 0.
*/

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = (n % 10);

	_putchar(last + '0');
	return (last);
}
