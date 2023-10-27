#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d", argc);
	return (0);
}
