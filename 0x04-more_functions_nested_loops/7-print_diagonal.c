#include "main.h"
/**
 * print_diagonal - draw a diagonal line.
 * @n: number of times '\' should print
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0; i < n; n++)
		{
			int space;

			for (space = 0; space < i; space ++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
