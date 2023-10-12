#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	}
}
