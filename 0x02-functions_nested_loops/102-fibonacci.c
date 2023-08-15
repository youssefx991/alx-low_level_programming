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
	long long f = 1, s = 2, nxt, i;

	printf("%lld, %lld, ", f, s);

	for (i = 3; i <= 50; i++)
	{
		nxt = f + s;
		f = s;
		s = nxt;

		printf("%lld",  nxt);

		if (i != 50)
			printf(", ");
	}
	printf("\n");

	return (0);
}
