#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print last digit of a random number
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
