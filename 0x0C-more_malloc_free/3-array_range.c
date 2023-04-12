#include <stdlib.h>
#include "main.h"

/**
 * array_range - the function that compute array_range
 * @min: the firs parater
 * @max: the second paramter
 * Return: the address
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	i = 0;
	size = max - min + 1;
	p = (int *)malloc(sizeof(int) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	while (min <= max)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
