#include "main.h"

/**
 * _isupper - function that checks uppercase letters
 * @c: the character that is passed to the function
 * Return: 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
