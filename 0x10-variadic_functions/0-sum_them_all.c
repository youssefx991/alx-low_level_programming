#include "variadic_functions.h"

/**
 * sum_them_all - calc sum for all arguments
 * @n: number of parameters
 *
 * Return: summation
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;


	if (n == 0)
		return (0);

	sum = 0;
	va_start(ptr, n);

	for (i = 1; i <= n; i++)
		sum += va_arg(ptr, int);

	return (sum);
}
