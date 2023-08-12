#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print different comp of two two-digit number
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(' ');
					putchar(k + 48);
					putchar(l + 48);
					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
