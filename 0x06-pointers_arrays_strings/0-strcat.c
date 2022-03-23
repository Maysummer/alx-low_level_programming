#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	len = i;

	j = 0;
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';
	return dest;
}
