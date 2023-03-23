#include "main.h"

/**
 *_isupper - tests whether a character is a lowercase letter alphabet.
 *Description: test whether a letter is uppercase or lowercase
 *@c: character to test.
 *Return: 1 if ot is a uppercase letter, 0 if it is not a uppercase letter
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
