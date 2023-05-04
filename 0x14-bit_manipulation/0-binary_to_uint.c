#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: binary in a string form
 * Return: the converted result or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_result;
	int i;

	conv_result = 0;
	i = 0;
	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < 0 || b[i] > 1)
		{
			return (0);
		}
		else
		{
			conv_result = 2 * conv_result + (b[i] - '0');
		}
		i++;
	}
	return (conv_result);
}
