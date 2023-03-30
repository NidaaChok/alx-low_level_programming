#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase letters
 *                   of string to uppercase letters
 * @str: given string to make it uppercase
 * Return: the new str string with uppercase letter
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;

	}

	return (str);
}
