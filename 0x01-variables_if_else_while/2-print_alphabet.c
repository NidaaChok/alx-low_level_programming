#include <stdio.h>

/**
 *main- print the alphabet in lowercase, followed by a  new line
 *Description: using the main function
 * this program print the letters in alphabet
 *Return: 0
 */

int main(void)
{
	int a = 97;

	for (; a < 123; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
