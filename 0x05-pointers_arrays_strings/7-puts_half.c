#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: string parameter
 */
void puts_half(char *str)
{
	int a, n, counter;

	counter = 0;

	for (a = 0; str[a] != '\0'; a++)
		counter++;

	n = (counter / 2);

	if ((counter % 2) == 1)
		n = ((counter + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

