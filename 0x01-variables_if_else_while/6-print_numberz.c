#include <stdio.h>
/**
 * main - Beginning of the function in betty style and documentation
 *
 * Return: End of function
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
