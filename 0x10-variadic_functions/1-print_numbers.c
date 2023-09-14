#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in paramters
 * @separator: separator between numbers
 * @n: number of numbers
 *
 * Retunrn: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int flag;
	va_list ptr;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);

	if (separator)
		flag = 1;
	else
		flag = 0;

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (flag && i != n)
			printf("%s", separator);
		if (i == n)
			printf("\n");
	}
}
