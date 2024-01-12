#include <stdio.h>
#include <stdbool.h>

/**
 * is_palindrome - Checks whether a given integer n is a palindrome or not
 * @n: The integer to be checked for palindrome.
 * Return: 1 if n is a palindrome, 0 otherwise.
 */
int is_palindrome(int n)
{
	int original = n;
	int reverse = 0;

	while (n > 0)
	{
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}
	return (original == reverse);
}

/**
 * find_largest_palindrome - Finds the largest palindrome
 * Return: The largest palindrome.
 */
int find_largest_palindrome(void)
{
	int max_palindrome = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			int product = i * j;

			if (is_palindrome(product) && product > max_palindrome)
			{
				max_palindrome = product;
			}
		}
	}
	return (max_palindrome);
}

/**
 * main - the execution function
 * Return: An integer representing the exit status of the program.
 */
int main(void)
{
	int result = find_largest_palindrome();
	FILE *file = fopen("102-result", "w");

	fprintf(file, "%d", result);
	fclose(file);
	return (0);
}
