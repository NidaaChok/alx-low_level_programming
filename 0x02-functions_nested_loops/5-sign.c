#include "main.h"

/**
 *print_sign - a function that's prints the sign of a number
 *@n: number to check.
 *
 *Return: 1 if positive, 0 if zero and -1 if it is negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
