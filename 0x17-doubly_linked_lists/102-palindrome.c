#include <stdio.h>
#include <stdbool.h>

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

int find_largest_palindrome()
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

int main()
{
	int result = find_largest_palindrome();
	FILE *file = fopen("102-result", "w");

	fprintf(file, "%d", result);
	fclose(file);
	return (0);
}
