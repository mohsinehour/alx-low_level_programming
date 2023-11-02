#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first element
 * @max: last element
 * @Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
