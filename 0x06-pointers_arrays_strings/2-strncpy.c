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

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	return (dest);
}
