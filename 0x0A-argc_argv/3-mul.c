#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d", _atoi(argv[1] * argv[2]));
	return (0);
}
