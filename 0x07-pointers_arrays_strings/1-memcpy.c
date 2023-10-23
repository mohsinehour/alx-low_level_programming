#include "main.h"

/**
 * _memcpy - main function prototype
 * @src: Source parameter
 * @dest: Destination parameter
 * @n: number of bytes
 * Return: Copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i=0; i < n; i++)
		dest = src[i];
	return (dest);
}
