#include "main.h"
/**
 * print_name - Prints a name
 *
 * Description: Prints a name
 * @name: Pointer to name string
 * @f: Pointer to a function
 * Return: void
 */

void f(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
