#include "variadic_functions.h"

/**
 * print_strings - prints strings in paramters
 * @separator: separator between numbers
 * @n: number of strings
 *
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list ptr;
	int flag;

	if (n <= 0)
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
		printf("%s", (s = va_arg(ptr, char *)) ? s : "(nil)");

		if (flag && i != n)
			printf("%s", separator);

		if (i == n)
			printf("\n");
	}
}
