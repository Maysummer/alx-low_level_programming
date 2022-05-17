#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - a first version of super simple shell that can run commands with
 * their full path, without any argument.
 *
 */
int main()
{
	/*char *argv;*/
	char *lineptr;
	size_t n = 0;
	ssize_t line_length;
	pid_t child;
	char *argv[] = {NULL, NULL};
	int status;

	while (1)
	{
		printf("#cisfun$ ");
		line_length = getline(&lineptr, &n, stdin);
		lineptr[line_length - 1] = '\0';
		argv[0] = lineptr;
		child = fork();
		if (child == 0)
		{
			execve(argv[0], argv, NULL);
			perror("Error: Pls enter full path");
		}
		else
		{
			wait(&status);
		}
	}
}
