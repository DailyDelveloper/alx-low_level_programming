#include <stdio.h>

/**
 * main - Finbonacci
 *
 * Description: Fibonacci
 * Return: int
 */

int main(void)
{
	long a = 1, b = 2, temp, i;

	printf("%ld, ", a);
	for (i = 0; i < 98; i++)
	{
		printf("%ld", b);
		temp = a + b;
		a = b;
		b = temp;
		if (b < 97)
		{
			printf(", ");
		}
	}
	return (0)
}
