#include <stdio.h>

/**
 * main - the execution of program starts here
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int arr[5];
	int *p;

	arr[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("arr[2] = %d\n", arr[2]);
	return (0);
}

