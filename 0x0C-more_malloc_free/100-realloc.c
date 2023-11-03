#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of of the allocated space for ptr
 * @new_size: the new size of the new memory block
 * Return: pointer allocate new size memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
        	if (ptr != NULL)
		{
            		free(ptr);
        	}
		return NULL;
	}
	if (ptr == NULL)
	{
		return malloc(new_size);
	}
	if (new_size == old_size)
	{
		return ptr;
	}
	unsigned int min_size = (old_size < new_size) ? old_size : new_size;
	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return NULL;
	}
	unsigned int i;

	for (i = 0; i < min_size; i++)
	{
		new_ptr[i] = ptr[i];
	}
	free(ptr);
	return new_ptr;
}
