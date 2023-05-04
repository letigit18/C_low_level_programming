#include <stdio.h>
#include "main.h"

/**
 * get_endianness - the function that checks endianness
 * Return: 0 for big endia, 1 for small endia
 */
int get_endianness(void)
{
	int a;
	char *temp;

	a = 1;
	temp = (char *) &a;
	return (*temp);
}
