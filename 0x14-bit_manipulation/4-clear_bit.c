#include <stdio.h>
#include "main.h"

/**
 * clear_bit - the function that clears the bit
 * @n: the given no. param
 * @index: the given index param
 * Return: 1 if it worked or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	c = 1 << index;
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = (~c & *n);
		return (1);
	}
}
