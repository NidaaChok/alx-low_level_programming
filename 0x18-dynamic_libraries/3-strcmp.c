#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: the number of comparison
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (equal);
}
