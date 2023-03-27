#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the function where execution begins
 * Return: 0 (Success)
 */
int main(void)
{
	int code[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		code[i] = rand() % 78;
		sum += (code[i] + '0');
		putchar(code[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
