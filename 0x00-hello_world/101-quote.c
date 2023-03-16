#include <stdio.h>
#include <unistd.h>

/**
 *main - prints out the last part of quote in standard error
 *
 *Description: using the main function
 *this program prints "and that piece of art is useful"
 *Return: 1 if success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
