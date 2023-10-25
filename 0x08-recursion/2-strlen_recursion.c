#include "main.h"

/**
 * _strlen_recursion - main function
 *
 * @s: Function parameter
 *
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
	len++;
	len += _strlen_recursion(s + 1);
	}
	return (len);
}
