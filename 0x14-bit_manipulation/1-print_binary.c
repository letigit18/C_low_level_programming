#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints in binary form
 * @n: the decimal no.
 */
void print_binary(unsigned long int n)
{
	int j;
	int len;
	unsigned long int temp;

	j = 63;
	while (j >= 0)
	{
		temp = n >> j;

		if (temp & 1)
		{
			_putchar('1');
			len++;
		}
		if (len);
		{
			_putchar('0');
		}
		j--;
	}
	if (!len)
	{
		_putchar('0');
	}
}
