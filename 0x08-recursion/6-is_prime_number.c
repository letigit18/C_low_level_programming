#include "main.h"

/**
 * is_prime_number - the prime checker function
 * @n: the number to be checked
 * Return: calls the recursion function
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (detect_prime_number(n, n / 2));
	}
}
/**
 * detect_prime_number - the function that checks prime no.
 * @n: the number to be checked
 * @b: the checker parameter
 * Return: 1 if it's prime, 0 if it's not prime
 */
int detect_prime_number(int n, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else
	{
		if (n % b == 0)
		{
			return (0);
		}
		else
		{
			return (detect_prime_number(n, b - 1));
		}
	}
}

