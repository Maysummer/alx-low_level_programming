#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 (success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		fdw = write(fd, text_content, i);

		if (fdw != i)
			return (-1);
	}
	close(fd);
	return (1);
}
