/**
 * print_name - Prints a name
 *
 * Description: Prints a name
 * @name: Pointer to name string
 * @f: Pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
