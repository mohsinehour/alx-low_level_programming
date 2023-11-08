#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array parameter
 * @size: size of the array
 * @action :pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
