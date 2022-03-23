#include "main.h"
/**
 * _strncpy - copy a string till a specified length
 * @dest: destination
 * @src: source
 * @n: specified length
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
