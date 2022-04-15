#include <stddef.h>
/**
 * int_index - funtion that searches for an integer
 * @array: array to be iterated over
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
