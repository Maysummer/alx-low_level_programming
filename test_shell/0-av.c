#include <stdio.h>

/**
 * main - print arguments
 * @ac: argument count
 * @av: argument array
 * Return: Always 0
 */
void main(__attribute__((unused)) int ac, char *av[])
{
	int i = 0;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
}
