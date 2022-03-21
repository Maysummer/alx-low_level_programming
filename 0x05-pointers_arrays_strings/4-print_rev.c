#include "main.h"
/**
 * print_rev - print a tring in reverse order
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i = -1;

	while (!(s[i]))
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
