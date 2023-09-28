#include "main.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: number
 * @index: specified index
 *
 * Return: success boolean
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int zero;

	if (index >= sizeof(n) * 8 || !n)
		return (-1);

	zero = 1 << index;
	zero = ~zero;

	*n = *n & zero;

	return (1);
}
