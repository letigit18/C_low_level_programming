#include "main.h"

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
