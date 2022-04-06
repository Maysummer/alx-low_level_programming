#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int) * height);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			free(ar);
			for (j = 0; j <= 1; j++)
				free(ar[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0
		}
	}
}

