#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always success (0)
 */
int main(int argc, char **argv)
{
	int i, j, k, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		if (atoi(argv[k]) >= 0)
		{
			sum += atoi(argv[k]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
