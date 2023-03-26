#include "main.h"

/**
 * print_diagonal - this function prints diagonal
 * @n: the parameter passed to the function
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
