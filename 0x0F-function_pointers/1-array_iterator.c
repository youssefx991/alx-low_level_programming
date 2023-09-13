#include "function_pointers.h"

/**
 * array_iterator - perform action on array
 * @array: array pointer
 * @size: size of array
 * @action: function to perform on array
 *
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
