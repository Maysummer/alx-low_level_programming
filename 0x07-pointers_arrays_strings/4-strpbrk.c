#include <stddef.h>
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: byte string
 * Return: pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
