#include <stdio.h>
#include "main.h"

/**
 * flip_bits - the function that flips the bits
 * @n: the given no. param
 * @m: the second no. to flip
 * Return: the lengh of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k;
	int len;
	unsigned long int temp;

	k = 63;
	len = 0;
	while (k >= 0)
	{
		temp = (n ^ m) >> k;
		if (temp & 1)
		{
			len++;
		}
		k--;
	}
	return (len);
}
