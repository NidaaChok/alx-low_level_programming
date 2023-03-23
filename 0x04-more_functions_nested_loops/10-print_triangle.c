#include "main.h"

/**
 *print_triangle - a function that prints a triangle, followed by a new lin
 *@size:the size of the triangle
 *Return: Nothing
*/

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < (size - i); j++)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
