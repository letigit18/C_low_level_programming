#include <stdio.h>

/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'q' || l == 'e')
		{
			continue;
		}
		putchar(l);
	}
	putchar('\n');
	return (0);
}
