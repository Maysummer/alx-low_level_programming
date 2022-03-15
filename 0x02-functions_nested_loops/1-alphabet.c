#include "main.h"
/**
 * print_alphabet - print alphabets in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
