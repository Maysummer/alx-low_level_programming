#include "main.h"
/**
 * print_diagonal - draw a diagonal line.
 * @n: number of times '\' should print
 */
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; n++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
