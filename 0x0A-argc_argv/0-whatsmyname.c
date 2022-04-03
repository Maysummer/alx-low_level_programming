#include <stdio.h>
/**
 * main - print program name
 * @argc: length of argv
 * @argv: parameters
 * Return: 0 (always success)
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
