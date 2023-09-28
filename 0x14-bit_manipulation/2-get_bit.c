#include "main.h"

/**
 * get_bit - get bit at index
 * @n: int number
 * @index: index of bit
 *
 * Return: bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
