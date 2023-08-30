#include "main.h"

/**
 * factorial - calculates factorial of given number
 * @n: number to get its factorial
 *
 * Return: factorial of number.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
