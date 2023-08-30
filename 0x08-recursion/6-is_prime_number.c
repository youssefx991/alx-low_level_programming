#include "main.h"


/**
 * check_prime - checks if number is prime
 * @n: number to be checked
 * @x: number to start checking with
 *
 * Return: true or false.
*/

int check_prime(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);
	if (x > n)
		return (0);

	return (check_prime(n, x + 1));
}
/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 *
 * Return: true or false.
*/

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
