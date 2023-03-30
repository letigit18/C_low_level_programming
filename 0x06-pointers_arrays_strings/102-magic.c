#include <stdio.h>

/**
 * main - the execution of program starts here
 * Return: 0 (Success)
 */
int main(void)
{
	int c;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &c;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}

