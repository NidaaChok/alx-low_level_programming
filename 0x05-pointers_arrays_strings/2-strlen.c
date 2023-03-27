#include "main.h"

/**
 *_strlen - Returns the length of a string.
 *@s: The string to get the length of.
 *Return: The length of @str
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;

	return (counter);
}
