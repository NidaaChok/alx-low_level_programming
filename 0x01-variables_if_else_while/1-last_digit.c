#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints whether the last digit of n
 *Description: using the main function
 *this program prints the last digit of n
 *Return: 0
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = n % 10;

	printf("Last digit of %d is ", n);
	if (l > 5)
		printf("%d and is greater than 5\n", l);
	else if (l == 0)
		printf("%d and is 0\n", l);
	else if (l < 6 && l != 0)
		printf("%d and is less than 6 and not 0\n", l);

	return (0);
}

