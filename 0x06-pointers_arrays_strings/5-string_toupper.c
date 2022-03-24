#include "main.h"

/**
 * string_toupper - chang all lowercase to uppercase
 * @s: string
 * Return: string
 */
chat *string_toupper(char *s)
{
	while (*s++)
	{
		if (*s >= 65 && *s <= 122)
		{
			*s - 32;
		}
	}
	return *s;
}
