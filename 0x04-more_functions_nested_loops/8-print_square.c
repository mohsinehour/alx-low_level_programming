#include "main.h"

/**
 * print_square - prints a square.
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		char c;

		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				c = '#';
				_putchar(c);
			}
			_putchar('\n');
		}
	}
}
