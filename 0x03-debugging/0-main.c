#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: testing positive_or_negative function
 *
 * Return: 0 success
*/

int main(void)
{
	if (positive_or_negative(0) == 0)
		printf("0 is zero");

	return (0);
}
