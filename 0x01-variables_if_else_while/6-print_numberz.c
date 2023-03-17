#include <stdio.h>

/**
 *main - prints single digits numbers of base 10 from 0 using putchar
 *Description: using the main function
 *this program will prints the single digits numbers of base 10
 *Return: 0
 */

int main(void)
{
	int n = 48;

	while (n < 58)
		putchar(n++);
	putchar('\n');
	return (0);
}
