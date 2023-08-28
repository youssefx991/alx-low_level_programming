#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of matrix
 * @a: array of matrix
 * @size: size of square matrix
 *
 * Return: nothing.
*/

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
		s2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", s1, s2);
}
