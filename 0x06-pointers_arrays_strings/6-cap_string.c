#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @s: string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' ||
		    s[i] == '\t' ||
		    s[i] == '\n' ||
		    s[i] == ',' ||
		    s[i] == ';' ||
		    s[i] == '.' ||
		    s[i] == '!' ||
		    s[i] == '?' ||
		    s[i] == '"' ||
		    s[i] == '(' ||
		    s[i] == ')' ||
		    s[i] == '{' ||
		    s[i] == '}' ||
		    i - 1 == 0)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
