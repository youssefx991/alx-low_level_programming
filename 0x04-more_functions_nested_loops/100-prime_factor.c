#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Description: find largest prime factor of a given number
 *
 * Return: Always 0
 */

int main(void)
{
	long int i, largest = 2, curr = 0, num = 612852475143;

	while (num % 2 == 0)
		num /= 2;

	while (num % 3 == 0)
		num /= 3;

	for (i = 5; i <= num; i++)
	{
		if (num % i == 0)
		{
			curr = i;

			while (num % i == 0)
				num /= i;
		}

		if (curr >= largest)
			largest = curr;
	}

	printf("%ld\n", largest);

	return (0);
}
