#include <stdio.h>
/**
 * main - Beginning of the function in betty style and documentation
 *
 * Return: End of function
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			purchar(ch);
		}
	}
	purchar('\n');
	return (0);
}
