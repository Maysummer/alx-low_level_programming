#include <stdio.h>
/**
 * main - print the number of arguments passed
 * @argc: amount of arguments
 * @argv: array of arguments passed
 * Return: Always success (0)
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
