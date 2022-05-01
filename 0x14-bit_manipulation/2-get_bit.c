/**
 * get_bit - return value of a bit at n index
 * @n: number to be checked
 * @index: index starting from behind
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n != 0)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
