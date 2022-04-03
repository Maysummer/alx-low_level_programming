#include <stdio.h>
/**
 * main - print program name
 * Return: 0 (always success)
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
