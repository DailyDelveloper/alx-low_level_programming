#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Description: Print alphabet excep e and q in lower case.
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');
	return (0);

}
