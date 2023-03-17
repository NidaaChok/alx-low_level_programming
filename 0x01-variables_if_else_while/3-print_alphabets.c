#include <stdio.h>

/**
 *main - print the alhpabet in lowercase and uppercase
 *Description: using the main function
 *this program print lowercase and uppercase alphabet
 *Return: 0
 */

int main(void)
{
	int a = 97;
	int A = 65;

	for (; a < 123; a++)
		putchar(a);
	while (A < 91)
		putchar(A++);
	putchar('\n');
	return (0);
}
