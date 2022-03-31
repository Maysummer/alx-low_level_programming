#include "main.h"

/**
 * rot13 - eencode with rot 13
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
