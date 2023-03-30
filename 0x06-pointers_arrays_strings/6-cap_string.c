#include "main.h"

/**
 * isLower - a function that checks if a given character is in lowercase
 * @c: character to check
 * Return: 1 if character is lowercase, else return 0 if uppercase
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - function that check if character is one of the delimiter
 * @c: charcter to check
 * Return: 1 if charcter is delimiter, else 0 if it is not delimiter
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * *cap_string - a function that capitalizes all words of a string.
 * @s: given string to capitalize
 * Return: return a pointer to the new capitalized string
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}

	return (ptr);
}
