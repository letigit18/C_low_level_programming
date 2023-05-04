#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value to 1
 * @n: the given number
 * @index: the given index
 * Return: 1 if it is set or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = ((1 << index) | *n);
		return (1);
	}
}
