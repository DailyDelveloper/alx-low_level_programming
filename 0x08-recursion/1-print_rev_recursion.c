#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * Description: Prints a given string in reverse
 * @s: Pointer to the strign to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (s[1] != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(s[0]);
}
