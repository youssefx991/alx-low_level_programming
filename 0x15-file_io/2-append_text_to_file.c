#include "main.h"

/**
 * length - ength of string
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
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: text to append to file
 *
 * Return: 1 success 0 failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t chars = 0, n = length(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (n)
		chars = write(fd, text_content, n);
	close(fd);
	return (chars == n ? 1 : -1);
}
