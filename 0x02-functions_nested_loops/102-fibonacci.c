#include <stdio.h>

/**
 * main - prints fibonacci numbers
 *
 * Description: Prints the first 50 fibonacci numbers
 * Return: int
 */

int main(void)
{
	long a = 1, b = 2, i, temp;

	printf("%ld, ", a);
	for (i = 1; i < 50; i++)
	{
		printf("%ld", b);
		temp = a + b;
		a = b;
		b = temp;
		if(i != 49)
		{
			printf(", ");
		}

	}
	printf("\n");
	return (0);

}
