#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * return: always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = 1; m < 10; m++)
		{
			if (n < m)
			{
				putchar('0' + n);
				putchar('0' + m);
				if (n != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
