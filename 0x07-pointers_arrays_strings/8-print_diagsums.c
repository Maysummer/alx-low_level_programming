#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *a;
			}
			if ((i + j) == (size - 1))
			{
				sum2 += *a;
			}
			a++;
		}
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
