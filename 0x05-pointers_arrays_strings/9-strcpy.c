#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: destination
 * @src: source
 * Return: return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, len;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = 0; j < len; j++)
	{
		dest[j] =  src[j];
	}
	dest[j] = '\0';
	return (dest);
}
