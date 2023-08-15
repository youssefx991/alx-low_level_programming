#include <stdio.h>

/**
 * main - entry point
 *
 * Description: find sum of odd numbers below
 *
 * Return: 0 success
*/

int main(void)
{
	int i, sum = 0;

	for (i = 1024; i >= 3; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
}
