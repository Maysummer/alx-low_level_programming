#include <stdio.h>
/**
 * main - Beginning of the function in betty style and documentation
 *
 * Return: End of function
 */
int main(void)
{
	for (int ch = "a"; ch <= "z"; ch++)
	{
		putchar(tolower(ch));
	}
	return (0);
}
