#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	i = 0;
	len = 0;

	if (str = NULL)
		return (NULL);

	while(str[i] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
