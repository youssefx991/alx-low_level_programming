#include "main.h"

/**
 * reverse_array - reverses contents of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, j, val;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		val = a[i];
		a[i] = a[j];
		a[j] = val;
	}
}
