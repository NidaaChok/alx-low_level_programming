#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *
 *@c: chracter to check.
 *
 *Return: 1 if character is a letter, else return 0.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
