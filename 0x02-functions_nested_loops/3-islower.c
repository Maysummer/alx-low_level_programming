#include "main.h"
/**
 * _islower - check if a letter is in lowercase
 * @c - the character to check
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
