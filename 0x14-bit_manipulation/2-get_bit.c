#include <stdio.h>
#include "main.h"

/**
 * get_bit - the function that returns a bit
 * @n: given no. param
 * @index: the given index param
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
	k = (n >> 1) & 1;
	return (k);
	}
}
