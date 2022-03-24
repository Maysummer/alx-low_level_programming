#include "main.h"

/**
 * leet - encode a string
 * @s: string
 * Retunr: string
 */
char *leet(char *s)
{
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] =  a[j])
			{
				s[i] = b[j];
			}
		}
		i++;
	}
	return (s);
}
