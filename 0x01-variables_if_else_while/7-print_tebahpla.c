#include <stdio.h>

/**
 * main - main functions
 * Return: 0 (Succcess)
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
