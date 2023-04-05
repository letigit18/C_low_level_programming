#include "main.h"

int check_sqrt(int n, int x);
/**
 * _sqrt_recursion - the function that checkes recursion
 * @n: the number that will be checked
 * Return: the recursion function if it's not perfect sqrt
 */
int _sqrt_recursion(int n)
{
	int x;

	x = 0;
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (check_sqrt(n, x));
	}
}
/**
 * check_sqrt - the function that checkes the sqrt
 * @n: the first parameter
 * @x: the variable that checkes the perfect square
 * Return: -1 if it is not perfect square else no
 */
int check_sqrt(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (check_sqrt(n, x + 1));
	}
}

