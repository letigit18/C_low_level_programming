#include "main.h"
/**
 * _print_rev_recursion - the function that prints in reverse order
 * @s: the string passed to the function
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
