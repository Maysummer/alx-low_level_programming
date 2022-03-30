/**
 * _strlen_recursion(char *s)
 * @s: string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i += 1;
	_strlen_recursion(s + 1);
	return (i);
}
