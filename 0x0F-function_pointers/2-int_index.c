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

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
				return (i);
		}
	}
	return (-1);
}
