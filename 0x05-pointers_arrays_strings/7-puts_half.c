#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: string to be halved
 */
void puts_half(char *str)
{
	int i, j, len. lastIndex;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;

	lastIndex = len - 1;

	for (j = ((lastIndex / 2) + 1); j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
