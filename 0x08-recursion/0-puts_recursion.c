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
	_putchar(s[0]);
	if (s[1] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s + 1);
	}
}
