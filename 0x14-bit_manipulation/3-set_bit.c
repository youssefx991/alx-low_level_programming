#include "main.h"

/**
 * set_bit - sets bit at indext to one
 * @n: number thta has bit
 * @index: index of bit
 *
 * Return: 1(worked) 0(error)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one;

	if (index >= sizeof(*n) * 8)
		return (-1);

	one = 1 << index;

	*n = *n | one;

	return (1);
}
