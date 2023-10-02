#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: contents of created file
 *
 * Return: 1 for success -1 for failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t chars;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}

	chars = write(fd, text_content, i);
	close(fd);

	return (chars == i ? 1 : -1);
}
