#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars and
 * initializes it with a specific char.
 * @int: size
 * @s: character
 * Return: Always success (0)
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
