#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - Prints n elements from an array
 *
 * Description: Prints n number of elements form a given array
 * @a: String pointer
 * @n: numbers of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
