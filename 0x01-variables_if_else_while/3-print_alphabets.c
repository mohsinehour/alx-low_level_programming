#include <stdio.h>
/*
 * main - prints lower and upper case alphabets.
 *return alwys 0
 */
int main() {
	char lc, uc;

	for(lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for(uc = 'A'; uc <= 'Z'; uc++)
	{
	putchar(uc);
	}
	putchar('\n');
	return 0;
}
