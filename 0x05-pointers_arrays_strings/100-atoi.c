#include "main.h"
#include <string.h>
#include <math.h>

/**
 * _atoi - converts string to int
 * @s: given string to be converted
 *
 * Return: converted integer.
*/

int _atoi(char *s)
{
	int i, n, sign;

	n = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
			sign = -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');
		}
	}

	return (n * sign);
}
