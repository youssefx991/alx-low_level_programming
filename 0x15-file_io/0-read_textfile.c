#include "main.h"

#define SIZE 1024
/**
 * read_textfile - reads a text file and prints its content
 * @filename: name of file
 * @letters: number of letters in file
 *
 * Return: number of letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t chars;
	char arr[1024];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	chars = read(fd, arr, letters);
	chars = write(STDOUT_FILENO, arr, chars);
	close(fd);
	return (chars);
}
