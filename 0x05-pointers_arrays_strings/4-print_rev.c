#include "main.h"
/**
 * print_rev - Print string in revers
 *
 * Description: Prints the given string in reverse
 * @s: Pointer to the string
 * Return: void
 */

void print_rev(char *s)
{
	int a, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (a = len - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
