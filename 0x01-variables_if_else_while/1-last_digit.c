#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */
	if (m  > 5)
		printf("Last digit of %d is and is greater than 5", n);
	if (m == 0)
		printf("Last digit of %d is and is 0", n);
	if (m < 6)
		printf("Last digit of %d is and is less than 6 and not 0", n);
	return (0);
}
