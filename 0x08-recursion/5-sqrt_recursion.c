#include "main.h"




/**
 * check_square - finds the square of number using recursion
 * @n: numbe rto find its square
 * @x: possible square of number
 *
 * Return: -1 if square not found , the squre otherwise
*/

int check_square(int n, int x)
{
	if (x * x  == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (check_square(n, x + 1));
}

/**
 * _sqrt_recursion - returns square root of given number
 * @n: given number
 *
 * Return: square root of number.
*/

int _sqrt_recursion(int n)
{
	return (check_square(n, 0));
}
