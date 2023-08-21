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
	unsigned int i, n;
	int sign;

	n = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');
		}
		else if (n != 0)
			break;
	}

	return (n * sign);
}
