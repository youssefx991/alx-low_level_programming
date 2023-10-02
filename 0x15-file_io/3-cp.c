#include "main.h"

#define ERROR_97 "Usage: cp file_from file_to\n"
#define ERROR_98 "Error: Can't read from file %s\n"
#define ERROR_99 "Error: Can't write to %s\n"
#define ERROR_100 "Error: Can't close fd %d\n"
#define PRM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - entry point
 * @ac: number of args
 * @av: array of args
 *
 * Return: always 0.
*/
int main(int ac, char **av)
{
	int fd_from = 0, fd_to = 0;
	ssize_t chars;
	char arr[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, ERROR_97);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, ERROR_98, av[1]);
		exit(98);
	}


	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PRM);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, ERROR_99, av[2]);
		exit(99);
	}

	while ((chars = read(fd_from, arr, 1024)) > 0)
		if (write(fd_to, arr, chars) != chars)
				dprintf(STDERR_FILENO, ERROR_99, av[2]), exit(99);
	if (chars == -1)
		dprintf(STDERR_FILENO, ERROR_98, av[1]), exit(98);

	fd_from = close(fd_from);
	fd_to = close(fd_to);

	if (fd_from)
		dprintf(STDERR_FILENO, ERROR_100, fd_from), exit(100);

	if (fd_to)
		dprintf(STDERR_FILENO, ERROR_100, fd_to), exit(100);
	return (EXIT_SUCCESS);
}
