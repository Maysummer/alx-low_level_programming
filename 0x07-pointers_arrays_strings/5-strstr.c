#include <stddef.h>
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *n;
	char *h;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			h = haystack + 1;
			n = needle + 1;

			while (*n != '\0')
			{
				if (*h != *n)
					break;
				n++;
				h++;
			}
			if (*n == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

