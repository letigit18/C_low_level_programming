#include "main.h"

/**
 * _pow_recursion - the function that calculates recursion
 * @x: the first parameter
 * @y: exponent parameter
 * Return: the calculated result
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
	}
	return (pow);
}
