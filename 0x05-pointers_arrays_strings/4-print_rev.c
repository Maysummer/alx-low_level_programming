#include "main.h"
/**
 * print_rev - print a tring in reverse order
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	j = len - 1;

	while (j >= 0)
	{
		_putchar(j);
		j--;
	}
	_putchar('\n');
}
