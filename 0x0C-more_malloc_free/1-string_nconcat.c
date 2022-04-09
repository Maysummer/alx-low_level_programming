#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of s2 to add to s1
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *newStr;

	i = j = len1 = len2 = 0;

	if (s1 == NULL)
		s1 = '';
	if (s2 == NULL)
		s2 = '';
	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2++])
	{
		len2++;
	}

	if (n >= len2)
	{
		newStr =  malloc(sizeof(char) * len1 + len2 + 1);
	}
	else
	{
		newStr = malloc(sizeof(char) * len1 + n + 1);
	}
	if (!newStr)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		newStr[i] = s1[i];
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		newStr[i] = s2[j];
		i++;
	}
	newStr[i] = '\0';
	return (newStr);
}
