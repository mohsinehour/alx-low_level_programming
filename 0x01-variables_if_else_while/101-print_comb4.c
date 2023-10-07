#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b &&  b < c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a != 10 || b != 10 || c != 10)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
