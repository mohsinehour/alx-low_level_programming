#include <stdio.h>
#include "main.h"
/**
 * main -  prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
	return (0);
}
