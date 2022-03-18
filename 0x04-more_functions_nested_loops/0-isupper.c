/**
 * _isupper - check for uppercase characters
 * @c: character to be checked
 * Return: Always 1 (success), 0 (otherwise)
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
