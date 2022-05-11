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

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}	
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
