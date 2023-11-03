#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of of the allocated space for ptr
 * @new_size: the new size of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;
	
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return(p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		for (i = 0; i < new_size; i++)
			p[i] = ptr[i];
	free(ptr);
	return (p);
}
