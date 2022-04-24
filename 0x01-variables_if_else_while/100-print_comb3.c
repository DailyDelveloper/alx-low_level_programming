#include <main.h>

/**
 * main - Prints combination of two digit
 *
 * Description: Prints combination of two digit
 * Return: int
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if(i != j)
			{
				_putchar(i + '0');
				_putchar(j + '0');

			}
			if(!(i == 8 && j == 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
