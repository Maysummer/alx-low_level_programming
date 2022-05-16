#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Reurn: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid id %u\n", my_pid);
	return (0);
}
