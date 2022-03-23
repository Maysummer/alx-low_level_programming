#include "main.h"
/**
 * _strncat - concatenate two strings to a specified point
 * @dest: destination
 * @src: source
 * @n: limit to be copied
 * Return: pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && j != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
