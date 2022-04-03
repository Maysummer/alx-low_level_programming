#include <stdio.h>
#include <stdlib.h>
/**
 * main - print min number of coins to make change for an amt of money
 * @argc: argument count
 * @argv: array of variables
 * Return: Always success (0)
 */
int main(int argc, char **argv)
{
	int i, num, result;

	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	for (i = 0; i < 5; i++)
	{
		while (num >= cents[i])
		{
			result++;
			num -= cents[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
