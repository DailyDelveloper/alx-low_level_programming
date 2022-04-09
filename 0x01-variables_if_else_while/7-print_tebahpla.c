#include <stdio.h>

/**
 * main - Prints alphabet
 *
 * Description: Prints lower case letter in reverse order
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

