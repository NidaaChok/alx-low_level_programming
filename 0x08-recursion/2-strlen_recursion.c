#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string to count its length
 * Return: length of the given string
 */

int _strlen_recursion(char *s)
{
	static int len;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(s + 1);
	}

	return (len);
}
