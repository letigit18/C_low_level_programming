#include "main.h"
#include <stdio.h>

/**
 * main - where the execution of the program begins
 * @argc: counting the number of characters
 * @argv: pointer to an arrays
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
