/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be changed
 * @index: index starting from behind
 * Return: 1 (Always success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (n != 0)
	{
		*n = ((1 << index) | *n);
		return (1);
	}
}
