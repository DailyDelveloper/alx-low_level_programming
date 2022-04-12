#include <stdio.h>

/**
 * main - Prints Hexadecimal numbers
 *
 * Description: Prints all single digit hexadecimal number using putchar()
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0x1; a < 0xf; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
