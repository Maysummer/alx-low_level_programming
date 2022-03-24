#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array
 * @n: number of elemenst in array
 */
void reverse_array(int *a, int n)
{
	int i, temp, lastIndex;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[lastIndex];
		a[lastIndex] = temp;
		lastIndex--;
	}
}
