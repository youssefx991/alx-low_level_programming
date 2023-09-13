#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 success
*/

int main(int argc, char **argv)
{
	int (*get_op)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	get_op = get_op_func(argv[2]);
	if (!get_op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((!b) && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op(a, b));
	return (0);
}
