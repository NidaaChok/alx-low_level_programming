#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: string to print it
 * Return: Nothing to return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
