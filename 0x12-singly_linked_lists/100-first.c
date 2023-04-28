#include <stdio.h>
void print_string(void) __attribute__((constructor));
/**
 * print_string - the function that runs before main
 */
void print_string(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

