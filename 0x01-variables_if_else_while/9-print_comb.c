#include <stdio.h>

/**
 *main - prints all possible combinations of single digit numbers
 *Description: using main function
 *Return: 0
 */

int main(void)
{
	int n = 48;

	for (; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
