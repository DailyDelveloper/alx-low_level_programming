#include "main.h"

/**
 * print_line - Print straight line
 *
 * Description: Prints line
 * @n: Number of lines
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
