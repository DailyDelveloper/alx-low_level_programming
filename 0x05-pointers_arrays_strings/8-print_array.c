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
	int i, len = sizeof(*a) / sizeof(a);

	for (i = 0; i < n && i < len; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
