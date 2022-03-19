#include "main.h"
/**
 * print_diagonal - draw a diagonal line.
 * n@: number of times '\' should print
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{

		for (i = 0; i <= n; n++)
		{
			int space;

			_putchar("%c" + "\\\n", space);
			space += ' ';
		}
	}
	_putchar('\n');
}
