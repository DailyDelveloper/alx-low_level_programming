#include <stdio.h>

/**
 * main - Print numbers
 *
 * Description: Print base 10 single digit numbers using putchar()
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n+'0');
	}
	putchar('\n');
	return (0);
}
