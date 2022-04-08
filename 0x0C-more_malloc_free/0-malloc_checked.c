#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of bytes to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
