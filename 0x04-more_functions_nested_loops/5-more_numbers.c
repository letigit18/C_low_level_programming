#include "main.h"

/**
 * more_numbers - the functions that prints number
 * description - this funcntion has certain condition to print
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}
