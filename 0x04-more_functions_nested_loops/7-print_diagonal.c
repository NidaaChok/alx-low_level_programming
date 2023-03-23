#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal line on the terminal
 *@n:the number of times the character \ should be printed
 *Return: Nothing to return
*/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0, j;

		while (i < n)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
