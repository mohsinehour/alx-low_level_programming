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
	int *arr, i, a = 0 ;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max +1));
	if (arr == NULL)
		return (NULL);
	arr[0] = min;
	for (i = 1; i <= max; i++)
	{
		while (min <=  max)
		{
			a += min;
			min++;
		}
		arr[i] = a;
	}
	return (arr);
}
