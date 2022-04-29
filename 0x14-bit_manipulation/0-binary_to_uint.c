#include <stddef.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string of characters to be converted
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int len = 0;
	int lastIndex;
	unsigned int sum = 0;

	while (*b != '\0')
		len++;

	lastIndex = len - 1;

	if (b == NULL)
		return (0);

	while (i < len)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		i++;
	}

	while (i < len)
	{
		sum += b[i] << lastIndex;
		i++;
		lastIndex--;
	}
	return (sum);
}
