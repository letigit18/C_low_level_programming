#include <stdio.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 57)
		{
			continue;
		}
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
