#include "search_algos.h"

/**
 * arr_pr - print array of search
 * @arr: array
 * @lo: lowest index
 * @hi: highest index
 */
void arr_pr(int *arr, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", arr[i]);
		if (i < hi)
			printf(", ");
	}
	printf("\n");
}


/**
 * bi_search - serach using binary algo:x
 * @lo: lowest index
 * @hi: highest index
 * @arr: array
 * @val: value to be searched
 * Return: value index
 */
int bi_search(size_t lo, size_t hi, int *arr, int val)
{
	size_t mid = (lo + hi) / 2;

	if (!arr || (lo > hi))
		return (-1);
	arr_pr(arr, lo, hi);
	if (arr[mid] == val)
		return (mid);
	if (arr[mid] < val)
		return (bi_search(mid + 1, hi, arr, val));
	if (arr[mid] > val)
		return (bi_search(lo, mid - 1, arr, val));
	return (-1);
}

/**
 * binary_search - binary search
 * @array: array
 * @size: array size
 * @value: value
 * Return: value index
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (bi_search(0, size - 1, array, value));
}
