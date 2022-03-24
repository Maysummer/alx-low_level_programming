#include "main.h"

/**
 * string_toupper - chang all lowercase to uppercase
 * @s: string
 * Return: string
 */
chat *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
