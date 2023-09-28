#include "main.h"

/**
 * flip_bits - number of bits required to change from n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of required bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		if (diff & 1)
			i++;
		diff = diff >> 1;
	}

	return (i);
}
