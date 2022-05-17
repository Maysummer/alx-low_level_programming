#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *lineptr;
	size_t bufsize = 32;
	ssize_t characters;

	/*lineptr = malloc(bufsize * sizeof(char));
	if (lineptr == NULL)
		return (1);*/

	while (1)
	{
		printf("$ ");
		characters = getline(&lineptr, &bufsize, stdin);
		printf("%zu characters were read.\n", characters);
		printf("%s", lineptr);
		if (characters == -1)
		{
			printf("\n");
			break;
		}
	}
	return (0);
}
