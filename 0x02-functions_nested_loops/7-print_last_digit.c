#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: number to be computed
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int ldigit = n % 10;

	if (ldigit < 0)
	{
		ldigit *= -1;
		_putchar(ldigit + '0');
	}
	else
	{
		_putchar(%ldigit + '0');
	}
}
