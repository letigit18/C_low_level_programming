#include "main.h"

/**
 * _puts_recursion - the function that prints a character
 * @s: the argument passed to the function
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
