#include <stdio.h>

/**
 * main - function main
 * description - main where the execution of the program starts
 * Return: (0) for success
 */
int main(void)
{
	char v1;
	int v2;
	long int v3;
	long long int v4;
	float v5;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(v1));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(v2));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(v3));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(v4));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v5));
	return (0);
}
