#include "main.h"
/**
 * main - print putchar
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int i = 0;

	while (i <= 10)
	{
		for (j = "a"; j <= "z"; j++)
		{
			_putchar(j);
		}
		i++;
	}
	_putchar('\n');
	return (0);
}
