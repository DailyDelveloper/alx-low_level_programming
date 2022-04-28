#include "main.h"

/**
 * _puts_recursion - Prints a string
 *
 * Description: Prints a given string
 * @s: Pointer to the first char of the  string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{	
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
