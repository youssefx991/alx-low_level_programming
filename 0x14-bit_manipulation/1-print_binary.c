#include "main.h"

/**
 * print_binary - converts int to binary
 * @n: int number
 *
 * Return: binary representaion
*/
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, flag = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	if (flag == 0)
		_putchar('0');
	_putchar('\n');
}
