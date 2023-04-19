/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
