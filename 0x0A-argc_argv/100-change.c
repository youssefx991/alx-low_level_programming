#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: size of argv
 * @argv: array of arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int amount, twentyFives, tens, fives, twos, ones;

		amount = atoi(argv[1]);

		if (amount < 0)
			amount = 0;

		twentyFives = amount / 25;
		amount = amount % 25;

		tens = amount / 10;
		amount = amount % 10;

		fives = amount / 5;
		amount = amount % 5;

		twos = amount / 2;
		amount = amount % 2;

		ones = amount;

		printf("%d\n", twentyFives + tens + fives + twos + ones);

	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
