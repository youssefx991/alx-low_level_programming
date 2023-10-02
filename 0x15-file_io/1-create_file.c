#include "main.h"

/**
 * length - length of string
 * @s: given string
 *
 * Return: length of string
*/
int length(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: contents of created file
 *
 * Return: 1 for success -1 for failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t chars = 0, n = length(text_content);

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (n)
		chars = write(fd, text_content, n);
	close(fd);

	return (chars == n ? 1 : -1);
}
