#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse
 *Description: using the main function
 *prints the lowercase letters in reverse
 *Return: 0
 */

int main(void)
{
	int n = 122;

	for (; n >= 97; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
