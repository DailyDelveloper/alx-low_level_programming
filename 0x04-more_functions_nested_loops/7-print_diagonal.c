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

	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
