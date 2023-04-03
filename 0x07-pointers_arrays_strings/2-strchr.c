#include "main.h"
#include <stddef.h>

/**
 * *_strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	char *p = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			break;
		}

		s++;
	}

	return (p);
}
