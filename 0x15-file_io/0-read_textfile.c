#include <stddef.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters:  number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_read, fd_write;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd_read = read(fd, buf, letters);
	if (fd_read == -1)
	{
		free(buf);
		return (0);
	}
	buf[fd_read] = '\0';

	close(fd);

	fd_write = write(STDOUT_FILENO, buf, fd_read);
	if (fd_write == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (fd_write);
}
