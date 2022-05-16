#include <string.h>
#include <stdio.h>

int main ()
{
	char str[80] = "My name - is - Nmesoma";
	const char s[2] = "-";
	char *token;

	token = strtok(str, s);
	while (token != NULL)
	{
		printf( " %s\n", token );
		token = strtok(NULL, s);
	}
	return (0);
}
