#include "main.h"
/**
 * _isupper - check for uppercase characters
 * @c: character to be checked
 * Return: Always 1 (success), 0 (otherwise)
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
