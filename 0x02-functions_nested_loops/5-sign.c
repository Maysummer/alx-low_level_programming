#include "main.h"
/**
 * print_sign - check if a letter is in lowercase
 * @n: the character to check
 * Return: return 1 if > 0, 0 if 0 and -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
