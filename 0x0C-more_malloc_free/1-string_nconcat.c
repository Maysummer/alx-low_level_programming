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
	for (j = 0; j < len2 && j < n; j++)
	{
		newStr[i] = s2[j];
	}
	newStr[i] = '\0';
	return (newStr);
}
