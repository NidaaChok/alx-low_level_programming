#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints whether the number stored in n is positive or negative
 *Description: using the main function
 *this program prints the number n followed is positive or negative or zero
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
