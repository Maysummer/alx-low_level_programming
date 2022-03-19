#include "main.h"
/**
 * print_line - draw a straight line in the terminal.
 * @n: number of times '_' should be printed.
 */
void print_line(int n)
{
	int n, i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
}
