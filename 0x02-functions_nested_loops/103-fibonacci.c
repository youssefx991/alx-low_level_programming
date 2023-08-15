#include <stdio.h>

/**
 * main - Prints first 50 fibonnacci
 *
 * Description: fibonnacic
 *
 * Return: 0 success
*/

int main(void)
{
	unsigned  long f = 1, s = 2, nxt, i, sum = 2;

	for (i = 3; i <= 50; i++)
	{
		nxt = f + s;
		f = s;
		s = nxt;

		if (nxt >= 4000000)
			break;
		if (nxt % 2 == 0)
			sum += nxt;

	}
	printf("%lu\n", sum);

	return (0);
}
