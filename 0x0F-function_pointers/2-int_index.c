#include "function_pointers.h"

/**
 * int_index - searches array
 * @array: array pointer
 * @size: size of array
 * @cmp: searching function pointer
 *
 * Return: index of element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}

	return (-1);
}
