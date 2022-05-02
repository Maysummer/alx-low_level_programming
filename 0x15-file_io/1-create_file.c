#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to be created
 * @text_content: content of file
 * Return: 1(success)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fdw;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		open(filename, O_CREAT, 0600);

	fd = open(filename, O_CREAT | O_EXCL | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	fdw = write(fd, text_content, strlen(text_content));
	if (fdw == -1)
		return (-1);
	return (1);
}
