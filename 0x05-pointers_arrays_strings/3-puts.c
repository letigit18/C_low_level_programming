#include "main.h"

/**
 * _puts - the function name
 * @str: the parameter passed to the function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
