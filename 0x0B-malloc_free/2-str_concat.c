#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int i, j, len1, len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	newStr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (newStr = NULL)
		return (NULL);

	while (i < len1)
	{
		newStr[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		newStr[i] = s2[j];
		i++;
		j++;
	}
	newStr[i] = '\0';
	return (newStr);
}

