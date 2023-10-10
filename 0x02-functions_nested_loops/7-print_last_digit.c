#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to check
 * Return: value of tha last digit
 */
 int print_last_digit(int)
{
	int a;

	if (n < 0)
	{
	n = -n;
	}
	a = n % 10;
	_putchar(a + '0');
	return (a);
}

