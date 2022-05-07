#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - copy content of a file to another
 * @argc: argument count
 * @argv:argument vector
 * Return: 1 (success)
 */

int main(int argc, char **argv)
{
	int fd, fdw, fdc, fdto, fdr, fdwc;
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (buf == NULL)
		return (-1);
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (1)
	{
		fdr = read(fd, buf, 1024);
		fdto = write(fdw, buf, fdr);
		if (fdr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (fdto == -1)
		{
			 dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			 exit(99);
		}
		if (fdr == 0)
			break;
	}
	fdc = close(fd);
	fdwc = close(fdw);
	if (fdc == -1 || fdwc == -1)
	{
		if (fdc == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		if (fdwc == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
