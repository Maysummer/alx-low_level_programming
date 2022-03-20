#include "main.h"
/**
 * print_triangle - print a triangle
 * @size - size of the triangle
 */
void print_triangle(int size)
{
	int i, space, hash;

	if (size <= 0)
		_putchar("\n");
	else
	{
		for (i = 1; i <= size; i++0)
		{
			for (space = i; space < size; space++)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= i; hash++)
			{
				_putchar('#');
			}
			_putchar("\n");
		}
	}
}
