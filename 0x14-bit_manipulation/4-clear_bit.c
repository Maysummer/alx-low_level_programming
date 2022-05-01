/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index from behind
 * Return: 1 (Always sucess)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned int long) *  8))
		return (-1);

	if (n != 0)
		*n = *n & (~(1 << index));
	return (1);
}
