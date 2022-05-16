#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - program that executes the command ls -l /tmp in 
 * 5 different child processes. Each child should be created
 * by the same process (the father).
 * Wait for a child to exit before creating a new child.
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	pid_t child;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int status;

	while (i < 5)
	{
		child = fork();
		if (child == -1)
		{
			perror("Error:");
			return (1);
		}
		else if (child == 0)
			execve(argv[0], argv, NULL);
		else
			wait(&status);
		i++;
	}
	return (0);
}
