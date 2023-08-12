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
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
