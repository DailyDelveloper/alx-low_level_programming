#include <stdio.h>

/**
 * main - prints all combinations of numbers
 *
 * Description: Prints all possible combinations of base numbers
 * prints "1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
