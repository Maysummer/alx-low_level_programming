#include <stdio.h>
/**
 * main - Beginning of the function in betty style and documentation
 *
 * Return: End of function
 */
int main(void)
{
	int ch;

	clrscr();
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar ('\n');
		getch();
	}
	return (0);
}
