/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: pointer to funtion of type char returning nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
