#include "main.h"

/**
 * print_diagonal - Print Diagonal
 *
 * Description: Print Diagonal line
 * @: numbers of the line
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar(''\n);
	}
}
