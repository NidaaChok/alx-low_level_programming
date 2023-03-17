#include <stdio.h>

/**
 *main - print the lowercase letter except q and e
 *Description: using the main function
 *this program prints the lowercase except thge q and e
 *Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
