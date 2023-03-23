#include "main.h"
#include <stdio.h>

/**
 *main - Entry point
 *Description:a fiz buzz game
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
