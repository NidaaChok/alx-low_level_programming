#include "main.h"

/**
 *print_line - a function that draws a straight line in the terminal
 *@n:the number of times the character _ should be printed
 *Return: Nothing to return
*/

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
