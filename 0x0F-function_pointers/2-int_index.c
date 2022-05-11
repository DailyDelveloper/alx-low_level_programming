#include "function_pointers.h"
/**
 * int_index - Search for an integer
 *
 * @array: integer array
 * @size: array size
 * @cmp: function pointer
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
			{
				return (i);
			}	
		}
	}
	return (-1);
}
