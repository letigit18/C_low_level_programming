#include "main.h"

/**
 * positive_or_negative - this function checkes the number sign
 * description: this funct takes one argument
 * parameter: i type number
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is Zero\n", i);
	}
	else
	{
		printf("%d is Negative\n", i);
	}
}
