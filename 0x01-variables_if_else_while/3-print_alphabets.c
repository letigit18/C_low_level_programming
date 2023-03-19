#include <stdio.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	char sl, cl;

	for (sl = 'a'; sl <= 'z'; sl++)
		putchar(sl);
	for (cl = 'A'; cl <= 'Z'; cl++)
		putchar(cl);
	putchar('\n');
	return (0);
}
