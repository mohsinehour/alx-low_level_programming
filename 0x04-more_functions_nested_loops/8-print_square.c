#include "main.h"

/**
 * print_square - prints a square.
 */

void print_square(int size)
{
	int i;
	char c;

	for (j = 0; j < size; j++)
	{
		for (i = 1; i < size; i++)
		{
			c = '#';
			_putchar(c);
		}
		_putchar('\n');
	}
}
