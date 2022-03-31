/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char *a;


	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				i++;
				break;
			}
			a++;
		}
		if (*a == '\0')
			break;
		s++;
	}
	return (i);
}
