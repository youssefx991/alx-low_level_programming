#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print different combinations of two digits
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
