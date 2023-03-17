#include <stdio.h>

/**
 *main- print the alphabet in lowercase, followed by a  new line
 *Description: using the main function
 * this program print the letters in alphabet
 *Return: 0
 */

int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
		putchar(a);
		putchar(10);

	return (0);
}
