#include "main.h"

/**
 * factorial - calculates the factorial of a no.
 * @n: the number to be calculated
 * Return: factorial result
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
