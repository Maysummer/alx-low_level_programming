#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lowercase 10 times
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
}
