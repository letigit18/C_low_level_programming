#include "main.h"
/**
 * _print_rev_recursion - the function that prints in reverse order
 * @s: the string passed to the function
 */
void _print_rev_recursion(char *s)
{
	int n;
	int i;

	n = 0;
	i = 0;
	if (*s != '\0')
	{
		n++;
		_print_rev_recursion(s + 1);
	}
	if (i <= n)
	{
		_putchar(s[n]);
		n--;
	}
}
