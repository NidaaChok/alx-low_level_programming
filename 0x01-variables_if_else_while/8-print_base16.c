#include <stdio.h>

/**
 *main - prints all the numbers of base 16ib lowercase
 *Description: using main function
 *Return: 0
 */

int main(void)
{
	int n = 48;
	int l = 97;

	while (n < 58)
		putchar(n++);
	while (l <= 102)
		putchar(l++);
	putchar('\n');
	return (0);
}
