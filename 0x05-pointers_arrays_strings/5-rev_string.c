#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j, len, temp, lastIndex;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	
	lastIndex = len - 1;

	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[lastIndex];
		s[lastIndex--] = temp;
	}
}
