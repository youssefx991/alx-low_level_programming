#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: A C program to display a line and return 1
 *
 * Return: Always 1 (Failure)
*/

int main(void)
{
	char line[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, line, 59);

	return (1);

}
